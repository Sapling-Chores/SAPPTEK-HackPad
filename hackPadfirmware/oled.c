#include QMK_KEYBOARD_H

bool oled_task_user(void) {
    oled_clear();
    oled_set_cursor(0,0);
    oled_write_ln("HACKPAD", false);
    oled_write_ln("Layer:", false);

    switch (get_highest_layer(layer_state)) {
        case 0: oled_write_ln("Base", false); break;
        case 1: oled_write_ln("Fn", false); break;
        default: oled_write_ln("???", false);
    }
    return false;
}
