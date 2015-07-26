#include <pebble.h>
#include "face.h" 
#include "main.h"  
  
int flag_enable_hourly_vibe = 0;  


// handle configuration change
static void in_recv_handler(DictionaryIterator *iterator, void *context) {
  Tuple *t = dict_read_first(iterator);

  while (t)  {

    switch(t->key)    {
    
      case KEY_ENABLE_HOURLY_VIBE:
           persist_write_int(KEY_ENABLE_HOURLY_VIBE, t->value->uint8);
           flag_enable_hourly_vibe = t->value->uint8;
           break;
    }    
    
    t = dict_read_next(iterator);
  }
  
}  

  
void tick_handler(struct tm *tick_time, TimeUnits units_changed)
{
  
    if (!clock_is_24h_style()) {
    
        if( tick_time->tm_hour > 11 ) {   // YG Jun-25-2014: 0..11 - am 12..23 - pm
            //strcpy(buffer_ampm, "PM" );
            if( tick_time->tm_hour > 12 ) tick_time->tm_hour -= 12;
        } else {
           // strcpy(buffer_ampm, "AM" );
            if( tick_time->tm_hour == 0 ) tick_time->tm_hour = 12;
        }        
 
    } else {
       // strcpy(buffer_ampm, "  " );
    }
 
   process_time(tick_time);
  
  // on hour change do a short buzz (if this is enabled)
  if (units_changed & HOUR_UNIT && flag_enable_hourly_vibe != 0) {
      vibes_short_pulse();
  }
   
   
}    
  
  
int main() {
  
  //reading flag settings
  flag_enable_hourly_vibe = persist_read_int(KEY_ENABLE_HOURLY_VIBE)? persist_read_int(KEY_ENABLE_HOURLY_VIBE) : 0;
  
  show_face();
  tick_timer_service_subscribe(MINUTE_UNIT, (TickHandler) tick_handler);
  
  // subscribing to JS messages
  app_message_register_inbox_received(in_recv_handler);
  app_message_open(app_message_inbox_size_maximum(), app_message_outbox_size_maximum());
  
  app_event_loop();
  tick_timer_service_unsubscribe(); 
  
  app_message_deregister_callbacks();
  
  return 0;
}
