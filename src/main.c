#include <pebble.h>
#include "face.h"  
  
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
   
   
}    
  
  
int main() {
  show_face();
  tick_timer_service_subscribe(MINUTE_UNIT, (TickHandler) tick_handler);
  app_event_loop();
  tick_timer_service_unsubscribe(); 
  return 0;
}
