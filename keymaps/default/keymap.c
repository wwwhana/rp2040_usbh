// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H


enum {
    _MAC = 0,
    _WIN,
    _NUM,
    _FN
};

enum {
    TD_FNM = 0,
    TD_FNW
};

#define TD_RCMD TD(TD_FNM)
#define TD_RALT TD(TD_FNW)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│ │Num│ / │ * │ - │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│ │ 7 │ 8 │ 9 │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘ ├───┼───┼───┤ + │
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │               │ 4 │ 5 │ 6 │   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐     ├───┼───┼───┼───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │     │ 1 │ 2 │ 3 │   │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤Ent│
     * │Ctrl│GUI │Alt │                        │ Alt│*FN │Menu│Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │   │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
     * *FN = Original keyboard FN, OR RGUI
     */


[_MAC] = LAYOUT_fullsize_ansi(
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,     KC_F13,  KC_F14,  KC_F15,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          KC_ENT,                                            KC_P4,   KC_P5,   KC_P6,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT,             KC_UP,               KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL, KC_LOPT, KC_LCMD,                            KC_SPC,                             TD_RCMD,  KC_RCMD, KC_ROPT, KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT
),
[_WIN] = LAYOUT_fullsize_ansi(

    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,          KC_ENT,                                            KC_P4,   KC_P5,   KC_P6,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,          KC_RSFT,             KC_UP,               KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             TD_RALT,  KC_RGUI, KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT
),
[_NUM] = LAYOUT_fullsize_ansi(
    _______,          _______, _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______, _______, _______,     _______, _______, _______,
    _______, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_NUM,    KC_PSLS,    KC_PAST, KC_PMNS, _______,     _______, _______, _______,    _______,   _______,    _______, _______,
    _______, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_CALC,    KC_P7,      KC_P8,   KC_P9,   KC_PPLS,     _______, _______, _______,    _______,   _______,   _______, _______,
    KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_P4,      KC_P5,      KC_P6,            KC_PENT,                                   _______,   _______,   _______,
    _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX,      KC_P0,    KC_P1,      KC_P2,      KC_P3,            _______,              KC_WH_U,             _______,   _______,   _______, _______,
    _______, _______, _______,                               _______,                                        KC_PDOT,    _______, _______, _______,     KC_WH_L, KC_WH_D, KC_WH_R,    _______,              _______
),
[_FN] = LAYOUT_fullsize_ansi(
    QK_BOOT,             _______,  KC_LPAD, KC_MCTL, KC_WSCH,    KC_ASST,    KC_SLEP,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MUTE, KC_MSEL, KC_EJCT,     _______, _______, KC_LSCR,
    _______,    _______, _______,  _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______, _______, _______,     _______, _______, _______,    _______,   _______,   _______, _______,
    _______,    _______, TG(_WIN), _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______, _______, _______,     _______, _______, _______,    _______,   _______,   _______, _______,
    KC_LCAP,    _______, _______,  _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,          _______,                                   _______,   _______,   _______,
    _______,             _______,  _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    TG(_NUM),          _______,              KC_BRIU,             _______,   _______,   _______, _______,
    _______,    _______, _______,                                _______,                                        _______,    _______, KC_LNG1, KC_LNG2,     KC_VOLD, KC_BRID, KC_VOLU,    _______,              _______
)
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t esc_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_GRV, KC_ESC);
const key_override_t f1_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_1, KC_F1);
const key_override_t f2_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_2, KC_F2);
const key_override_t f3_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_3, KC_F3);
const key_override_t f4_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_4, KC_F4);
const key_override_t f5_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_5, KC_F5);
const key_override_t f6_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_6, KC_F6);
const key_override_t f7_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_Q, KC_F7);
const key_override_t f8_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_W, KC_F8);
const key_override_t f9_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_E, KC_F9);
const key_override_t f10_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_R, KC_F10);
const key_override_t f11_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_T, KC_F11);
const key_override_t f12_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_Y, KC_F12);
const key_override_t up_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_P, KC_UP);
const key_override_t down_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_SCLN, KC_DOWN);
const key_override_t left_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_L, KC_LEFT);
const key_override_t right_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_QUOT, KC_RGHT);
const key_override_t home_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_A, KC_HOME);
const key_override_t end_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_Z, KC_END);
const key_override_t pgup_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_S, KC_PGUP);
const key_override_t pgdn_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_X, KC_PGDN);
const key_override_t mc_left_override = ko_make_basic(MOD_BIT(KC_RCTL),KC_COMM, LCTL(KC_LEFT));
const key_override_t mc_right_override = ko_make_basic(MOD_BIT(KC_RCTL), KC_DOT, LCTL(KC_RGHT));
const key_override_t code_left_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_COMM, LOPT(LCMD(KC_LEFT)));
const key_override_t code_right_override = ko_make_basic(MOD_BIT(KC_RCMD), KC_DOT, LOPT(LCMD(KC_RGHT)));

const key_override_t *key_overrides[] = {
    &delete_key_override,
    &esc_override,
    &f1_override,
    &f2_override,
    &f3_override,
    &f4_override,
    &f5_override,
    &f6_override,
    &f7_override,
    &f8_override,
    &f9_override,
    &f10_override,
    &f11_override,
    &f12_override,
    &up_override,
    &down_override,
    &left_override,
    &right_override,
    &home_override,
    &end_override,
    &pgup_override,
    &pgdn_override,
    &mc_left_override,
    &mc_right_override,
    &code_left_override,
    &code_right_override,
    NULL
};


bool process_detected_host_os_kb(os_variant_t detected_os) {
    // if (!process_detected_host_os_user(detected_os)) {
    //     return false;
    // }

    layer_clear();
    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            layer_on(_MAC);
            break;
        case OS_WINDOWS:
        case OS_LINUX:
        case OS_UNSURE:
        default:
            layer_on(_WIN);
            break;
    }

    return true;
}

void td_mac_layer_finished(tap_dance_state_t *state, void *user_data) {
    if(state->count == 1  && !state->interrupted) {
        register_code(KC_RCMD);
    }else {
        unregister_code(KC_RALT);
        layer_on(_FN);  // 원하는 레이어 번호로 변경
    }
}


void td_mac_layer_reset(tap_dance_state_t *state, void *user_data) {
    unregister_code(KC_RCMD);
    layer_off(_FN);  // 원하는 레이어 번호로 변경

}

void td_win_layer_finished(tap_dance_state_t *state, void *user_data) {
    if(state->count == 1 && !state->interrupted) {
        register_code(KC_RALT);
    }else if(state->count > 1)  {
        unregister_code(KC_RALT);
        layer_on(_FN);  // 원하는 레이어 번호로 변경
    }
}


void td_win_layer_reset(tap_dance_state_t *state, void *user_data) {
    unregister_code(KC_RALT);
    layer_off(_FN);  // 원하는 레이어 번호로 변경

}



tap_dance_action_t tap_dance_actions[] = {
    [TD_FNM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_mac_layer_finished,  td_mac_layer_reset),
    [TD_FNW] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_win_layer_finished,  td_win_layer_reset)
};

