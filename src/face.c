#include "face.h"
#include <pebble.h>

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static Window *s_window;
static GBitmap *s_res_image_background;
static GFont s_res_digital_seven_mono_45;
static GFont s_res_digital_seven_mono_70;
static GFont s_res_digital_seven_mono_25;
static BitmapLayer *s_bitmaplayer_back;
static TextLayer *s_textlayer_h1;
static TextLayer *s_textlayer_m2;
static TextLayer *s_textlayer_h2;
static TextLayer *s_textlayer_m1;
static TextLayer *s_textlayer_y1;
static TextLayer *s_textlayer_y2;
static TextLayer *s_textlayer_y3;
static TextLayer *s_textlayer_y4;
static TextLayer *s_textlayer_date;

static void initialise_ui(void) {
  s_window = window_create();
  window_set_background_color(s_window, GColorBlack);
  
  s_res_image_background = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BACKGROUND);
  s_res_digital_seven_mono_45 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_DIGITAL_SEVEN_MONO_45));
  s_res_digital_seven_mono_70 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_DIGITAL_SEVEN_MONO_70));
  s_res_digital_seven_mono_25 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_DIGITAL_SEVEN_MONO_25));
  // s_bitmaplayer_back
  s_bitmaplayer_back = bitmap_layer_create(GRect(0, 0, 144, 168));
  bitmap_layer_set_bitmap(s_bitmaplayer_back, s_res_image_background);
  bitmap_layer_set_background_color(s_bitmaplayer_back, GColorBlack);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_back);
  
  // s_textlayer_h1
  s_textlayer_h1 = text_layer_create(GRect(13, 21, 25, 45));
  text_layer_set_background_color(s_textlayer_h1, GColorBlack);
  text_layer_set_text(s_textlayer_h1, "0");
  text_layer_set_font(s_textlayer_h1, s_res_digital_seven_mono_45);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_h1);
  
  // s_textlayer_m2
  s_textlayer_m2 = text_layer_create(GRect(109, 21, 25, 45));
  text_layer_set_background_color(s_textlayer_m2, GColorBlack);
  text_layer_set_text(s_textlayer_m2, "0");
  text_layer_set_font(s_textlayer_m2, s_res_digital_seven_mono_45);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_m2);
  
  // s_textlayer_h2
  s_textlayer_h2 = text_layer_create(GRect(37, -4, 35, 70));
  text_layer_set_background_color(s_textlayer_h2, GColorClear);
  text_layer_set_text(s_textlayer_h2, "0");
  text_layer_set_font(s_textlayer_h2, s_res_digital_seven_mono_70);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_h2);
  
  // s_textlayer_m1
  s_textlayer_m1 = text_layer_create(GRect(75, -4, 35, 70));
  text_layer_set_background_color(s_textlayer_m1, GColorClear);
  text_layer_set_text(s_textlayer_m1, "0");
  text_layer_set_font(s_textlayer_m1, s_res_digital_seven_mono_70);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_m1);
  
  // s_textlayer_y1
  s_textlayer_y1 = text_layer_create(GRect(13, 90, 25, 45));
  text_layer_set_background_color(s_textlayer_y1, GColorBlack);
  text_layer_set_text(s_textlayer_y1, "0");
  text_layer_set_font(s_textlayer_y1, s_res_digital_seven_mono_45);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_y1);
  
  // s_textlayer_y2
  s_textlayer_y2 = text_layer_create(GRect(37, 82, 35, 70));
  text_layer_set_background_color(s_textlayer_y2, GColorClear);
  text_layer_set_text(s_textlayer_y2, "0");
  text_layer_set_font(s_textlayer_y2, s_res_digital_seven_mono_70);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_y2);
  
  // s_textlayer_y3
  s_textlayer_y3 = text_layer_create(GRect(75, 82, 35, 70));
  text_layer_set_background_color(s_textlayer_y3, GColorClear);
  text_layer_set_font(s_textlayer_y3, s_res_digital_seven_mono_70);
  text_layer_set_text(s_textlayer_y3, "0");
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_y3);
  
  // s_textlayer_y4
  s_textlayer_y4 = text_layer_create(GRect(109, 90, 25, 45));
  text_layer_set_background_color(s_textlayer_y4, GColorBlack);
  text_layer_set_text(s_textlayer_y4, "0");
  text_layer_set_font(s_textlayer_y4, s_res_digital_seven_mono_45);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_y4);
  
  // s_textlayer_date
  s_textlayer_date = text_layer_create(GRect(0, 70, 144, 25));
  text_layer_set_background_color(s_textlayer_date, GColorClear);
  text_layer_set_text(s_textlayer_date, "hi poochie");
  text_layer_set_text_alignment(s_textlayer_date, GTextAlignmentCenter);
  text_layer_set_font(s_textlayer_date, s_res_digital_seven_mono_25);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_date);
  
  
  #ifdef PBL_COLOR
    
      text_layer_set_text_color(s_textlayer_h1, GColorRajah);
      text_layer_set_text_color(s_textlayer_h2, GColorChromeYellow);
      text_layer_set_text_color(s_textlayer_m1, GColorChromeYellow);
      text_layer_set_text_color(s_textlayer_m2, GColorRajah);
      
      
      text_layer_set_text_color(s_textlayer_y1, GColorRajah);
      text_layer_set_text_color(s_textlayer_y2, GColorChromeYellow);
      text_layer_set_text_color(s_textlayer_y3, GColorChromeYellow);
      text_layer_set_text_color(s_textlayer_y4, GColorRajah);
   
      text_layer_set_text_color(s_textlayer_date, GColorChromeYellow);
      
  #else
      text_layer_set_text_color(s_textlayer_h1, GColorWhite);
      text_layer_set_text_color(s_textlayer_h2, GColorWhite);
      text_layer_set_text_color(s_textlayer_m1, GColorWhite);
      text_layer_set_text_color(s_textlayer_m2, GColorWhite);


      text_layer_set_text_color(s_textlayer_y1, GColorWhite);
      text_layer_set_text_color(s_textlayer_y2, GColorWhite);
      text_layer_set_text_color(s_textlayer_y3, GColorWhite);
      text_layer_set_text_color(s_textlayer_y4, GColorWhite);
   
      text_layer_set_text_color(s_textlayer_date, GColorWhite);
  #endif
  
  
  
  
}

static void destroy_ui(void) {
  window_destroy(s_window);
  bitmap_layer_destroy(s_bitmaplayer_back);
  text_layer_destroy(s_textlayer_h1);
  text_layer_destroy(s_textlayer_m2);
  text_layer_destroy(s_textlayer_h2);
  text_layer_destroy(s_textlayer_m1);
  text_layer_destroy(s_textlayer_y1);
  text_layer_destroy(s_textlayer_y2);
  text_layer_destroy(s_textlayer_y3);
  text_layer_destroy(s_textlayer_y4);
  text_layer_destroy(s_textlayer_date);
  gbitmap_destroy(s_res_image_background);
  fonts_unload_custom_font(s_res_digital_seven_mono_45);
  fonts_unload_custom_font(s_res_digital_seven_mono_70);
  fonts_unload_custom_font(s_res_digital_seven_mono_25);
}
// END AUTO-GENERATED UI CODE


static void handle_window_unload(Window* window) {
  destroy_ui();
}


static char h1[]="0",h2[]="0",m1[]="0",m2[]="0", y1[]="0", y2[]="0", y3[]="0", y4[]="0";
static char dow[] = "WED SEP 31";

void process_time(struct tm *tick_time) {
  
  snprintf(h1, sizeof("0"), "%d", tick_time->tm_hour / 10);
  snprintf(h2, sizeof("0"), "%d", tick_time->tm_hour % 10);
  snprintf(m1, sizeof("0"), "%d", tick_time->tm_min / 10);
  snprintf(m2, sizeof("0"), "%d", tick_time->tm_min % 10);  
  
  strftime(dow, sizeof("WED SEP 31"), "%a %b %d", tick_time);
  
  tick_time->tm_year += 1900;
  snprintf(y1, sizeof("0"), "%d", tick_time->tm_year / 1000);
  snprintf(y2, sizeof("0"), "%d", tick_time->tm_year % 1000 / 100);
  snprintf(y3, sizeof("0"), "%d", tick_time->tm_year % 100 / 10);
  snprintf(y4, sizeof("0"), "%d", tick_time->tm_year % 10);
    
  text_layer_set_text(s_textlayer_h1, h1);  
  text_layer_set_text(s_textlayer_h2, h2); 
  text_layer_set_text(s_textlayer_m1, m1); 
  text_layer_set_text(s_textlayer_m2, m2);    
  
  text_layer_set_text(s_textlayer_date, dow);
  
  text_layer_set_text(s_textlayer_y1, y1);  
  text_layer_set_text(s_textlayer_y2, y2); 
  text_layer_set_text(s_textlayer_y3, y3); 
  text_layer_set_text(s_textlayer_y4, y4);    
     
}

void show_face(void) {
  initialise_ui();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .unload = handle_window_unload,
  });
  window_stack_push(s_window, true);
}

void hide_face(void) {
  window_stack_remove(s_window, true);
}
