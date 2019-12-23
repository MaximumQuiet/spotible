#include <pebble.h>

static Window *s_window;

static void window_load(Window *window) {

}

static void window_unload(Window *window) {
}

static void init() {
  s_window = window_create();

  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = window_load,
    .unload = window_unload
  });

  window_stack_push(s_main_window, true);
}

static void deinit() {
  window_destroy(s_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
