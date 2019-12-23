#include <pebble.h>

static Window *s_window;
static ActionBarLayer *s_action_bar;

//=======================
// Action bar configuring
//=======================

static void action_next_click_handler() {
}

static void action_previous_click_handler() {
}

static void click_config_provider(void *context) {
  window_single_click_subscribe(BUTTON_ID_DOWN, (ClickHandler) action_next_click_handler);
  window_single_click_subscribe(BUTTON_ID_UP, (ClickHandler) action_previous_click_handler);
}

static void window_load(Window *window) {
  s_action_bar = action_bar_layer_create();
  action_bar_layer_add_to_window(s_action_bar, window);
  action_bar_layer_set_click_config_provider(s_action_bar, click_config_provider);
}

static void window_unload(Window *window) {
  action_bar_layer_destroy(s_action_bar);
}

static void init() {
  s_window = window_create();

  window_set_window_handlers(s_window, (WindowHandlers) {
    .load = window_load,
    .unload = window_unload
  });

  window_stack_push(s_window, true);
}

static void deinit() {
  window_destroy(s_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
