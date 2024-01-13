bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t mods = get_mods() | get_oneshot_mods();
    if (mods & MOD_MASK_SHIFT) {
        rgb_matrix_set_color(9, RGB_GREEN);
    }
    if (mods & MOD_MASK_CTRL) {
        rgb_matrix_set_color(9, RGB_RED);
    }    
    if (mods & MOD_MASK_ALT) {
        rgb_matrix_set_color(9, RGB_BLUE);
    }
    if (mods & MOD_MASK_GUI) {
        rgb_matrix_set_color(9, RGB_YELLOW);
    }

    

    switch(get_highest_layer(layer_state|default_layer_state)) {
        case 5:
            rgb_matrix_set_color(10, RGB_ORANGE);
            break;
        case 4:
            rgb_matrix_set_color(10, RGB_RED);
            break;
        case 3:
            rgb_matrix_set_color(10, RGB_PINK);
            break;       
        case 2:
            rgb_matrix_set_color(10, RGB_MAGENTA);
            break;
        case 1:
            rgb_matrix_set_color(10, RGB_PURPLE);
            break;
        default:
            break;
    }

    return false;
}