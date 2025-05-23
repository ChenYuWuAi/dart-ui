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



void setup_scr_scrVision(lv_ui *ui)
{
    //Write codes scrVision
    ui->scrVision = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrVision, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrVision, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrVision, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_contBG
    ui->scrVision_contBG = lv_obj_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_contBG, 0, 0);
    lv_obj_set_size(ui->scrVision_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrVision_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrVision_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrVision_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_labelTitle
    ui->scrVision_labelTitle = lv_label_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_labelTitle, 200, 17);
    lv_obj_set_size(ui->scrVision_labelTitle, 386, 49);
    lv_label_set_text(ui->scrVision_labelTitle, "制导参数相机画面");
    lv_label_set_long_mode(ui->scrVision_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrVision_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrVision_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrVision_labelTitle, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrVision_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrVision_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_btnBack
    ui->scrVision_btnBack = lv_button_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_btnBack, 33, 0);
    lv_obj_set_size(ui->scrVision_btnBack, 85, 67);
    ui->scrVision_btnBack_label = lv_label_create(ui->scrVision_btnBack);
    lv_label_set_text(ui->scrVision_btnBack_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->scrVision_btnBack_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrVision_btnBack_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrVision_btnBack, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrVision_btnBack_label, LV_PCT(100));

    //Write style for scrVision_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrVision_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_btnBack, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrVision_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrVision_btnBack, &lv_font_montserratMedium_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrVision_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrVision_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_contPanel
    ui->scrVision_contPanel = lv_obj_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_contPanel, 570, 45);
    lv_obj_set_size(ui->scrVision_contPanel, 175, 247);
    lv_obj_set_scrollbar_mode(ui->scrVision_contPanel, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrVision_contPanel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrVision_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_contPanel, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrVision_contPanel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_contPanel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_contPanel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrVision_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrVision_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrVision_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrVision_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_imgBright
    ui->scrVision_imgBright = lv_image_create(ui->scrVision_contPanel);
    lv_obj_set_pos(ui->scrVision_imgBright, 30, 14);
    lv_obj_set_size(ui->scrVision_imgBright, 33, 33);
    lv_obj_add_flag(ui->scrVision_imgBright, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrVision_imgBright, &_bright_RGB565A8_33x33);
    lv_image_set_pivot(ui->scrVision_imgBright, 50,50);
    lv_image_set_rotation(ui->scrVision_imgBright, 0);

    //Write style for scrVision_imgBright, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrVision_imgBright, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrVision_imgBright, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_imgColor
    ui->scrVision_imgColor = lv_image_create(ui->scrVision_contPanel);
    lv_obj_set_pos(ui->scrVision_imgColor, 101, 14);
    lv_obj_set_size(ui->scrVision_imgColor, 30, 30);
    lv_obj_add_flag(ui->scrVision_imgColor, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrVision_imgColor, &_hue_RGB565A8_30x30);
    lv_image_set_pivot(ui->scrVision_imgColor, 50,50);
    lv_image_set_rotation(ui->scrVision_imgColor, 0);

    //Write style for scrVision_imgColor, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrVision_imgColor, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrVision_imgColor, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_sliderBright
    ui->scrVision_sliderBright = lv_slider_create(ui->scrVision_contPanel);
    lv_obj_set_pos(ui->scrVision_sliderBright, 41, 61);
    lv_obj_set_size(ui->scrVision_sliderBright, 8, 167);
    lv_slider_set_range(ui->scrVision_sliderBright, 0, 100);
    lv_slider_set_mode(ui->scrVision_sliderBright, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->scrVision_sliderBright, 50, LV_ANIM_OFF);

    //Write style for scrVision_sliderBright, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_sliderBright, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_sliderBright, lv_color_hex(0xd2d2d2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_sliderBright, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_sliderBright, 88, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->scrVision_sliderBright, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_sliderBright, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrVision_sliderBright, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_sliderBright, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_sliderBright, 88, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for scrVision_sliderBright, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_sliderBright, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_sliderBright, lv_color_hex(0x000d2e), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_sliderBright, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_sliderBright, 88, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes scrVision_sliderHue
    ui->scrVision_sliderHue = lv_slider_create(ui->scrVision_contPanel);
    lv_obj_set_pos(ui->scrVision_sliderHue, 113, 61);
    lv_obj_set_size(ui->scrVision_sliderHue, 8, 167);
    lv_slider_set_range(ui->scrVision_sliderHue, 0, 100);
    lv_slider_set_mode(ui->scrVision_sliderHue, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->scrVision_sliderHue, 50, LV_ANIM_OFF);

    //Write style for scrVision_sliderHue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_sliderHue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_sliderHue, lv_color_hex(0xd2d2d2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_sliderHue, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_sliderHue, 88, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->scrVision_sliderHue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_sliderHue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrVision_sliderHue, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_sliderHue, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_sliderHue, 88, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for scrVision_sliderHue, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_sliderHue, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_sliderHue, lv_color_hex(0x000d2e), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_sliderHue, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_sliderHue, 88, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes scrVision_btnNext
    ui->scrVision_btnNext = lv_button_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_btnNext, 575, 373);
    lv_obj_set_size(ui->scrVision_btnNext, 166, 61);
    ui->scrVision_btnNext_label = lv_label_create(ui->scrVision_btnNext);
    lv_label_set_text(ui->scrVision_btnNext_label, "下一镜头");
    lv_label_set_long_mode(ui->scrVision_btnNext_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrVision_btnNext_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrVision_btnNext, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrVision_btnNext_label, LV_PCT(100));

    //Write style for scrVision_btnNext, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_btnNext, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_btnNext, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_btnNext, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrVision_btnNext, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_btnNext, 35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_btnNext, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrVision_btnNext, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrVision_btnNext, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrVision_btnNext, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrVision_btnNext, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_contImage
    ui->scrVision_contImage = lv_obj_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_contImage, 33, 75);
    lv_obj_set_size(ui->scrVision_contImage, 516, 342);
    lv_obj_set_scrollbar_mode(ui->scrVision_contImage, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrVision_contImage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_contImage, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_contImage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_imgScanned
    ui->scrVision_imgScanned = lv_image_create(ui->scrVision_contImage);
    lv_obj_set_pos(ui->scrVision_imgScanned, 41, 16);
    lv_obj_set_size(ui->scrVision_imgScanned, 426, 341);
    lv_obj_add_flag(ui->scrVision_imgScanned, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrVision_imgScanned, &_example_RGB565A8_426x341);
    lv_image_set_pivot(ui->scrVision_imgScanned, 50,50);
    lv_image_set_rotation(ui->scrVision_imgScanned, 0);

    //Write style for scrVision_imgScanned, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrVision_imgScanned, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrVision_imgScanned, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrVision_btnRestart
    ui->scrVision_btnRestart = lv_button_create(ui->scrVision);
    lv_obj_set_pos(ui->scrVision_btnRestart, 575, 303);
    lv_obj_set_size(ui->scrVision_btnRestart, 166, 61);
    ui->scrVision_btnRestart_label = lv_label_create(ui->scrVision_btnRestart);
    lv_label_set_text(ui->scrVision_btnRestart_label, "重启摄像头");
    lv_label_set_long_mode(ui->scrVision_btnRestart_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrVision_btnRestart_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrVision_btnRestart, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrVision_btnRestart_label, LV_PCT(100));

    //Write style for scrVision_btnRestart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrVision_btnRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrVision_btnRestart, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrVision_btnRestart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrVision_btnRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrVision_btnRestart, 35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrVision_btnRestart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrVision_btnRestart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrVision_btnRestart, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrVision_btnRestart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrVision_btnRestart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scrVision.
    lv_obj_set_style_clip_corner(ui->scrVision_contImage, true, 0);

    //Update current screen layout.
    lv_obj_update_layout(ui->scrVision);

    //Init events for screen.
    events_init_scrVision(ui);
}
