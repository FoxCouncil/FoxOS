#include "print.h"

void foxos_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_RED, PRINT_COLOR_BLACK);
    print_str("Welcome to FoxOS v0.1");
}