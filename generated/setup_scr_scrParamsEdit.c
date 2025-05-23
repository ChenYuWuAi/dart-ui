/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_scrParamsEdit(lv_ui *ui)
{
    //Write codes scrParamsEdit
    ui->scrParamsEdit = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrParamsEdit, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrParamsEdit, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParamsEdit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_contBG
    ui->scrParamsEdit_contBG = lv_obj_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_contBG, 0, 0);
    lv_obj_set_size(ui->scrParamsEdit_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrParamsEdit_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParamsEdit_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_labelTitle
    ui->scrParamsEdit_labelTitle = lv_label_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_labelTitle, 200, 17);
    lv_obj_set_size(ui->scrParamsEdit_labelTitle, 386, 49);
    lv_label_set_text(ui->scrParamsEdit_labelTitle, "参数协议编辑");
    lv_label_set_long_mode(ui->scrParamsEdit_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrParamsEdit_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_labelTitle, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_btnBack
    ui->scrParamsEdit_btnBack = lv_button_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_btnBack, 33, 0);
    lv_obj_set_size(ui->scrParamsEdit_btnBack, 85, 67);
    ui->scrParamsEdit_btnBack_label = lv_label_create(ui->scrParamsEdit_btnBack);
    lv_label_set_text(ui->scrParamsEdit_btnBack_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->scrParamsEdit_btnBack_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_btnBack_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_btnBack, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParamsEdit_btnBack_label, LV_PCT(100));

    //Write style for scrParamsEdit_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnBack, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnBack, &lv_font_montserratMedium_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_contPanel
    ui->scrParamsEdit_contPanel = lv_obj_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_contPanel, 335, 75);
    lv_obj_set_size(ui->scrParamsEdit_contPanel, 437, 231);
    lv_obj_set_scrollbar_mode(ui->scrParamsEdit_contPanel, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParamsEdit_contPanel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParamsEdit_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_contPanel, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_contPanel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_contPanel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_contPanel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_labelParamName
    ui->scrParamsEdit_labelParamName = lv_label_create(ui->scrParamsEdit_contPanel);
    lv_obj_set_pos(ui->scrParamsEdit_labelParamName, 56, 20);
    lv_obj_set_size(ui->scrParamsEdit_labelParamName, 330, 49);
    lv_label_set_text(ui->scrParamsEdit_labelParamName, "target_yaw_angle");
    lv_label_set_long_mode(ui->scrParamsEdit_labelParamName, LV_LABEL_LONG_WRAP);

    //Write style for scrParamsEdit_labelParamName, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_labelParamName, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_labelParamName, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_labelParamName, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_labelParamName, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_labelParamName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_btnMinus
    ui->scrParamsEdit_btnMinus = lv_button_create(ui->scrParamsEdit_contPanel);
    lv_obj_set_pos(ui->scrParamsEdit_btnMinus, 22, 75);
    lv_obj_set_size(ui->scrParamsEdit_btnMinus, 58, 52);
    ui->scrParamsEdit_btnMinus_label = lv_label_create(ui->scrParamsEdit_btnMinus);
    lv_label_set_text(ui->scrParamsEdit_btnMinus_label, "-");
    lv_label_set_long_mode(ui->scrParamsEdit_btnMinus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_btnMinus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_btnMinus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParamsEdit_btnMinus_label, LV_PCT(100));

    //Write style for scrParamsEdit_btnMinus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnMinus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnMinus, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnMinus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnMinus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnMinus, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnMinus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnMinus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnMinus, &lv_font_montserratMedium_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnMinus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_btnMinus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_btnPlus
    ui->scrParamsEdit_btnPlus = lv_button_create(ui->scrParamsEdit_contPanel);
    lv_obj_set_pos(ui->scrParamsEdit_btnPlus, 361, 75);
    lv_obj_set_size(ui->scrParamsEdit_btnPlus, 58, 52);
    ui->scrParamsEdit_btnPlus_label = lv_label_create(ui->scrParamsEdit_btnPlus);
    lv_label_set_text(ui->scrParamsEdit_btnPlus_label, "+");
    lv_label_set_long_mode(ui->scrParamsEdit_btnPlus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_btnPlus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_btnPlus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParamsEdit_btnPlus_label, LV_PCT(100));

    //Write style for scrParamsEdit_btnPlus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnPlus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnPlus, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnPlus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnPlus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnPlus, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnPlus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnPlus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnPlus, &lv_font_montserratMedium_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnPlus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_btnPlus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_taParamValue
    ui->scrParamsEdit_taParamValue = lv_textarea_create(ui->scrParamsEdit_contPanel);
    lv_obj_set_pos(ui->scrParamsEdit_taParamValue, 102, 74);
    lv_obj_set_size(ui->scrParamsEdit_taParamValue, 237, 53);
    lv_textarea_set_text(ui->scrParamsEdit_taParamValue, "114514");
    lv_textarea_set_placeholder_text(ui->scrParamsEdit_taParamValue, "");
    lv_textarea_set_password_bullet(ui->scrParamsEdit_taParamValue, "*");
    lv_textarea_set_password_mode(ui->scrParamsEdit_taParamValue, false);
    lv_textarea_set_one_line(ui->scrParamsEdit_taParamValue, true);
    lv_textarea_set_accepted_chars(ui->scrParamsEdit_taParamValue, "0123456789.-");
    lv_textarea_set_max_length(ui->scrParamsEdit_taParamValue, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrParamsEdit_taParamValue, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrParamsEdit_taParamValue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_taParamValue, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParamsEdit_taParamValue, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_taParamValue, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_taParamValue, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_taParamValue, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParamsEdit_taParamValue, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_taParamValue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_taParamValue, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_taParamValue, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_taParamValue, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_taParamValue, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrParamsEdit_taParamValue, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_taParamValue, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_taParamValue, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrParamsEdit_taParamValue, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_taParamValue, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_taParamValue, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_taParamValue, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_taParamValue, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_imgbtnResetThis
    ui->scrParamsEdit_imgbtnResetThis = lv_imagebutton_create(ui->scrParamsEdit_contPanel);
    lv_obj_set_pos(ui->scrParamsEdit_imgbtnResetThis, 317, 154);
    lv_obj_set_size(ui->scrParamsEdit_imgbtnResetThis, 50, 50);
    lv_obj_add_flag(ui->scrParamsEdit_imgbtnResetThis, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->scrParamsEdit_imgbtnResetThis, LV_IMAGEBUTTON_STATE_RELEASED, &_restart_alt_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24_RGB565A8_50x50, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParamsEdit_imgbtnResetThis, LV_IMAGEBUTTON_STATE_PRESSED, &_restart_alt_24dp_BB271A_FILL0_wght400_GRAD0_opsz24_RGB565A8_50x50, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParamsEdit_imgbtnResetThis, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_restart_alt_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24_RGB565A8_50x50, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParamsEdit_imgbtnResetThis, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_restart_alt_24dp_BB271A_FILL0_wght400_GRAD0_opsz24_RGB565A8_50x50, NULL, NULL);
    ui->scrParamsEdit_imgbtnResetThis_label = lv_label_create(ui->scrParamsEdit_imgbtnResetThis);
    lv_label_set_text(ui->scrParamsEdit_imgbtnResetThis_label, "");
    lv_label_set_long_mode(ui->scrParamsEdit_imgbtnResetThis_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_imgbtnResetThis_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_imgbtnResetThis, 0, LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_imgbtnResetThis, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrParamsEdit_imgbtnResetThis, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_imgbtnResetThis, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_imgbtnResetThis, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_imgbtnResetThis, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_imgbtnResetThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_imgbtnResetThis, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scrParamsEdit_imgbtnResetThis, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scrParamsEdit_imgbtnResetThis, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_imgbtnResetThis, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_imgbtnResetThis, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_imgbtnResetThis, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_imgbtnResetThis, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scrParamsEdit_imgbtnResetThis, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scrParamsEdit_imgbtnResetThis, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scrParamsEdit_imgbtnResetThis, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_imgbtnResetThis, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_imgbtnResetThis, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_imgbtnResetThis, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_imgbtnResetThis, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scrParamsEdit_imgbtnResetThis, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scrParamsEdit_imgbtnResetThis, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scrParamsEdit_imgbtnResetThis, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scrParamsEdit_cbUpdateThis
    ui->scrParamsEdit_cbUpdateThis = lv_checkbox_create(ui->scrParamsEdit_contPanel);
    lv_obj_set_pos(ui->scrParamsEdit_cbUpdateThis, 45, 164);
    lv_checkbox_set_text(ui->scrParamsEdit_cbUpdateThis, "更新本参数");

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_cbUpdateThis, &lv_font_fusionpixelzhhans_23, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_pad_top(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_cbUpdateThis, &lv_font_fusionpixellatin_23, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_letter_space(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_pad_top(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_cbUpdateThis, &lv_font_fusionpixelzhhans_23, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_letter_space(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_cbUpdateThis, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->scrParamsEdit_cbUpdateThis, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParamsEdit_cbUpdateThis, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_INDICATOR, State: LV_STATE_PRESSED.
    lv_obj_set_style_pad_all(ui->scrParamsEdit_cbUpdateThis, 3, LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_border_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_border_side(ui->scrParamsEdit_cbUpdateThis, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_PRESSED);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_pad_all(ui->scrParamsEdit_cbUpdateThis, 3, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scrParamsEdit_cbUpdateThis, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED | LV_STATE_PRESSED.
    lv_obj_set_style_pad_all(ui->scrParamsEdit_cbUpdateThis, 3, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_border_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_border_side(ui->scrParamsEdit_cbUpdateThis, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED | LV_STATE_PRESSED);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_pad_all(ui->scrParamsEdit_cbUpdateThis, 3, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrParamsEdit_cbUpdateThis, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for scrParamsEdit_cbUpdateThis, Part: LV_PART_INDICATOR, State: LV_STATE_DISABLED.
    lv_obj_set_style_pad_all(ui->scrParamsEdit_cbUpdateThis, 3, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_cbUpdateThis, 2, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrParamsEdit_cbUpdateThis, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrParamsEdit_cbUpdateThis, 6, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_cbUpdateThis, 255, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_cbUpdateThis, lv_color_hex(0x2f3243), LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_cbUpdateThis, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DISABLED);

    //Write codes scrParamsEdit_btnNext
    ui->scrParamsEdit_btnNext = lv_button_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_btnNext, 468, 358);
    lv_obj_set_size(ui->scrParamsEdit_btnNext, 266, 61);
    ui->scrParamsEdit_btnNext_label = lv_label_create(ui->scrParamsEdit_btnNext);
    lv_label_set_text(ui->scrParamsEdit_btnNext_label, "GOGOGO!");
    lv_label_set_long_mode(ui->scrParamsEdit_btnNext_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_btnNext_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_btnNext, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParamsEdit_btnNext_label, LV_PCT(100));

    //Write style for scrParamsEdit_btnNext, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnNext, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnNext, lv_color_hex(0x28b620), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnNext, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnNext, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnNext, 35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnNext, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnNext, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnNext, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnNext, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_btnNext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_listFiles
    ui->scrParamsEdit_listFiles = lv_list_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_listFiles, 33, 75);
    lv_obj_set_size(ui->scrParamsEdit_listFiles, 262, 233);
    lv_obj_set_scrollbar_mode(ui->scrParamsEdit_listFiles, LV_SCROLLBAR_MODE_OFF);
    ui->scrParamsEdit_listFiles_item0 = lv_list_add_button(ui->scrParamsEdit_listFiles, LV_SYMBOL_EDIT, "*target_yaw_angle");
    ui->scrParamsEdit_listFiles_item1 = lv_list_add_button(ui->scrParamsEdit_listFiles, LV_SYMBOL_EDIT, "target_trigger_angle");

    //Write style state: LV_STATE_DEFAULT for &style_scrParamsEdit_listFiles_main_main_default
    static lv_style_t style_scrParamsEdit_listFiles_main_main_default;
    ui_init_style(&style_scrParamsEdit_listFiles_main_main_default);

    lv_style_set_pad_top(&style_scrParamsEdit_listFiles_main_main_default, 5);
    lv_style_set_pad_left(&style_scrParamsEdit_listFiles_main_main_default, 5);
    lv_style_set_pad_right(&style_scrParamsEdit_listFiles_main_main_default, 5);
    lv_style_set_pad_bottom(&style_scrParamsEdit_listFiles_main_main_default, 5);
    lv_style_set_bg_opa(&style_scrParamsEdit_listFiles_main_main_default, 255);
    lv_style_set_bg_color(&style_scrParamsEdit_listFiles_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParamsEdit_listFiles_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scrParamsEdit_listFiles_main_main_default, 0);
    lv_style_set_radius(&style_scrParamsEdit_listFiles_main_main_default, 14);
    lv_style_set_shadow_width(&style_scrParamsEdit_listFiles_main_main_default, 0);
    lv_obj_add_style(ui->scrParamsEdit_listFiles, &style_scrParamsEdit_listFiles_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrParamsEdit_listFiles_main_scrollbar_default
    static lv_style_t style_scrParamsEdit_listFiles_main_scrollbar_default;
    ui_init_style(&style_scrParamsEdit_listFiles_main_scrollbar_default);

    lv_style_set_radius(&style_scrParamsEdit_listFiles_main_scrollbar_default, 5);
    lv_style_set_bg_opa(&style_scrParamsEdit_listFiles_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scrParamsEdit_listFiles_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParamsEdit_listFiles_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scrParamsEdit_listFiles, &style_scrParamsEdit_listFiles_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrParamsEdit_listFiles_extra_btns_main_default
    static lv_style_t style_scrParamsEdit_listFiles_extra_btns_main_default;
    ui_init_style(&style_scrParamsEdit_listFiles_extra_btns_main_default);

    lv_style_set_pad_top(&style_scrParamsEdit_listFiles_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_scrParamsEdit_listFiles_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_scrParamsEdit_listFiles_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_scrParamsEdit_listFiles_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_scrParamsEdit_listFiles_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_scrParamsEdit_listFiles_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scrParamsEdit_listFiles_extra_btns_main_default, &lv_font_fusionpixellatin_18);
    lv_style_set_text_opa(&style_scrParamsEdit_listFiles_extra_btns_main_default, 255);
    lv_style_set_radius(&style_scrParamsEdit_listFiles_extra_btns_main_default, 5);
    lv_style_set_bg_opa(&style_scrParamsEdit_listFiles_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_scrParamsEdit_listFiles_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParamsEdit_listFiles_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scrParamsEdit_listFiles_item1, &style_scrParamsEdit_listFiles_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scrParamsEdit_listFiles_item0, &style_scrParamsEdit_listFiles_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_PRESSED for &style_scrParamsEdit_listFiles_extra_btns_main_pressed
    static lv_style_t style_scrParamsEdit_listFiles_extra_btns_main_pressed;
    ui_init_style(&style_scrParamsEdit_listFiles_extra_btns_main_pressed);

    lv_style_set_pad_top(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 5);
    lv_style_set_pad_left(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 5);
    lv_style_set_pad_right(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 5);
    lv_style_set_pad_bottom(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 5);
    lv_style_set_border_width(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 0);
    lv_style_set_radius(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 5);
    lv_style_set_text_color(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, &lv_font_fusionpixellatin_18);
    lv_style_set_text_opa(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 255);
    lv_style_set_bg_opa(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, 255);
    lv_style_set_bg_color(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParamsEdit_listFiles_extra_btns_main_pressed, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scrParamsEdit_listFiles_item1, &style_scrParamsEdit_listFiles_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->scrParamsEdit_listFiles_item0, &style_scrParamsEdit_listFiles_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style state: LV_STATE_FOCUSED for &style_scrParamsEdit_listFiles_extra_btns_main_focused
    static lv_style_t style_scrParamsEdit_listFiles_extra_btns_main_focused;
    ui_init_style(&style_scrParamsEdit_listFiles_extra_btns_main_focused);

    lv_style_set_pad_top(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 5);
    lv_style_set_pad_left(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 5);
    lv_style_set_pad_right(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 5);
    lv_style_set_pad_bottom(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 5);
    lv_style_set_border_width(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 0);
    lv_style_set_radius(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 5);
    lv_style_set_text_color(&style_scrParamsEdit_listFiles_extra_btns_main_focused, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scrParamsEdit_listFiles_extra_btns_main_focused, &lv_font_fusionpixellatin_18);
    lv_style_set_text_opa(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 255);
    lv_style_set_bg_opa(&style_scrParamsEdit_listFiles_extra_btns_main_focused, 255);
    lv_style_set_bg_color(&style_scrParamsEdit_listFiles_extra_btns_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParamsEdit_listFiles_extra_btns_main_focused, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scrParamsEdit_listFiles_item1, &style_scrParamsEdit_listFiles_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->scrParamsEdit_listFiles_item0, &style_scrParamsEdit_listFiles_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DEFAULT for &style_scrParamsEdit_listFiles_extra_texts_main_default
    static lv_style_t style_scrParamsEdit_listFiles_extra_texts_main_default;
    ui_init_style(&style_scrParamsEdit_listFiles_extra_texts_main_default);

    lv_style_set_pad_top(&style_scrParamsEdit_listFiles_extra_texts_main_default, 5);
    lv_style_set_pad_left(&style_scrParamsEdit_listFiles_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_scrParamsEdit_listFiles_extra_texts_main_default, 5);
    lv_style_set_pad_bottom(&style_scrParamsEdit_listFiles_extra_texts_main_default, 5);
    lv_style_set_border_width(&style_scrParamsEdit_listFiles_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_scrParamsEdit_listFiles_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scrParamsEdit_listFiles_extra_texts_main_default, &lv_font_fusionpixellatin_20);
    lv_style_set_text_opa(&style_scrParamsEdit_listFiles_extra_texts_main_default, 255);
    lv_style_set_radius(&style_scrParamsEdit_listFiles_extra_texts_main_default, 5);
    lv_style_set_transform_width(&style_scrParamsEdit_listFiles_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_scrParamsEdit_listFiles_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_scrParamsEdit_listFiles_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParamsEdit_listFiles_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //Write codes scrParamsEdit_contDDLpanel
    ui->scrParamsEdit_contDDLpanel = lv_obj_create(ui->scrParamsEdit);
    lv_obj_set_pos(ui->scrParamsEdit_contDDLpanel, 33, 349);
    lv_obj_set_size(ui->scrParamsEdit_contDDLpanel, 326, 79);
    lv_obj_set_scrollbar_mode(ui->scrParamsEdit_contDDLpanel, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParamsEdit_contDDLpanel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParamsEdit_contDDLpanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_contDDLpanel, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_contDDLpanel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_contDDLpanel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_contDDLpanel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParamsEdit_contDDLpanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParamsEdit_contDDLpanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParamsEdit_contDDLpanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParamsEdit_contDDLpanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_contDDLpanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParamsEdit_btnSelectAll
    ui->scrParamsEdit_btnSelectAll = lv_button_create(ui->scrParamsEdit_contDDLpanel);
    lv_obj_set_pos(ui->scrParamsEdit_btnSelectAll, 37, 16);
    lv_obj_set_size(ui->scrParamsEdit_btnSelectAll, 100, 50);
    ui->scrParamsEdit_btnSelectAll_label = lv_label_create(ui->scrParamsEdit_btnSelectAll);
    lv_label_set_text(ui->scrParamsEdit_btnSelectAll_label, "全不选");
    lv_label_set_long_mode(ui->scrParamsEdit_btnSelectAll_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_btnSelectAll_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_btnSelectAll, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParamsEdit_btnSelectAll_label, LV_PCT(100));

    //Write style for scrParamsEdit_btnSelectAll, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnSelectAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnSelectAll, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnSelectAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_btnSelectAll, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_btnSelectAll, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnSelectAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnSelectAll, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnSelectAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrParamsEdit_btnSelectAll, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnSelectAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnSelectAll, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnSelectAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scrParamsEdit_btnSelectAll, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnSelectAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnSelectAll, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnSelectAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scrParamsEdit_btnSelectAll, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnSelectAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnSelectAll, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnSelectAll, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnSelectAll, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnSelectAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnSelectAll, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes scrParamsEdit_btnResetAll
    ui->scrParamsEdit_btnResetAll = lv_button_create(ui->scrParamsEdit_contDDLpanel);
    lv_obj_set_pos(ui->scrParamsEdit_btnResetAll, 183, 16);
    lv_obj_set_size(ui->scrParamsEdit_btnResetAll, 100, 50);
    ui->scrParamsEdit_btnResetAll_label = lv_label_create(ui->scrParamsEdit_btnResetAll);
    lv_label_set_text(ui->scrParamsEdit_btnResetAll_label, "复位");
    lv_label_set_long_mode(ui->scrParamsEdit_btnResetAll_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParamsEdit_btnResetAll_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParamsEdit_btnResetAll, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParamsEdit_btnResetAll_label, LV_PCT(100));

    //Write style for scrParamsEdit_btnResetAll, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnResetAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnResetAll, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnResetAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParamsEdit_btnResetAll, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParamsEdit_btnResetAll, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnResetAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnResetAll, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnResetAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrParamsEdit_btnResetAll, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnResetAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnResetAll, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnResetAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scrParamsEdit_btnResetAll, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnResetAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnResetAll, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnResetAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scrParamsEdit_btnResetAll, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrParamsEdit_btnResetAll, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrParamsEdit_btnResetAll, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrParamsEdit_btnResetAll, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->scrParamsEdit_btnResetAll, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrParamsEdit_btnResetAll, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrParamsEdit_btnResetAll, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //The custom code of scrParamsEdit.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrParamsEdit);

    //Init events for screen.
    events_init_scrParamsEdit(ui);
}
