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



void setup_scr_scrHome(lv_ui *ui)
{
    //Write codes scrHome
    ui->scrHome = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrHome, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contBG
    ui->scrHome_contBG = lv_obj_create(ui->scrHome);
    lv_obj_set_pos(ui->scrHome_contBG, 0, 0);
    lv_obj_set_size(ui->scrHome_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrHome_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contText
    ui->scrHome_contText = lv_obj_create(ui->scrHome);
    lv_obj_set_pos(ui->scrHome_contText, 196, 352);
    lv_obj_set_size(ui->scrHome_contText, 560, 91);
    lv_obj_set_scrollbar_mode(ui->scrHome_contText, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contText, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contText, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contText, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contText, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contText, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contText, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contText, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contText, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contText, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contText, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contText, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelPrompt
    ui->scrHome_labelPrompt = lv_label_create(ui->scrHome_contText);
    lv_obj_set_pos(ui->scrHome_labelPrompt, 19, 30);
    lv_obj_set_size(ui->scrHome_labelPrompt, 528, 33);
    lv_label_set_text(ui->scrHome_labelPrompt, "无异常YawTriggerLoad01电机裁判系统遥控MCU相机离线");
    lv_label_set_long_mode(ui->scrHome_labelPrompt, LV_LABEL_LONG_SCROLL);

    //Write style for scrHome_labelPrompt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelPrompt, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelPrompt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelPrompt, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelPrompt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_labelPrompt, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_labelPrompt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contTop
    ui->scrHome_contTop = lv_obj_create(ui->scrHome);
    lv_obj_set_pos(ui->scrHome_contTop, 46, 0);
    lv_obj_set_size(ui->scrHome_contTop, 710, 77);
    lv_obj_set_scrollbar_mode(ui->scrHome_contTop, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contTop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contTop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgRoboMaster
    ui->scrHome_imgRoboMaster = lv_image_create(ui->scrHome_contTop);
    lv_obj_set_pos(ui->scrHome_imgRoboMaster, 4, 24);
    lv_obj_set_size(ui->scrHome_imgRoboMaster, 42, 34);
    lv_obj_add_flag(ui->scrHome_imgRoboMaster, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgRoboMaster, &_single_r_RGB565A8_42x34);
    lv_image_set_pivot(ui->scrHome_imgRoboMaster, 50,50);
    lv_image_set_rotation(ui->scrHome_imgRoboMaster, 0);

    //Write style for scrHome_imgRoboMaster, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgRoboMaster, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgRoboMaster, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgIconWIFI
    ui->scrHome_imgIconWIFI = lv_image_create(ui->scrHome_contTop);
    lv_obj_set_pos(ui->scrHome_imgIconWIFI, 59, 19);
    lv_obj_set_size(ui->scrHome_imgIconWIFI, 40, 40);
    lv_obj_add_flag(ui->scrHome_imgIconWIFI, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgIconWIFI, &_wifi_off_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrHome_imgIconWIFI, 50,50);
    lv_image_set_rotation(ui->scrHome_imgIconWIFI, 0);

    //Write style for scrHome_imgIconWIFI, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgIconWIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgIconWIFI, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelDate
    ui->scrHome_labelDate = lv_label_create(ui->scrHome_contTop);
    lv_obj_set_pos(ui->scrHome_labelDate, 458, 21);
    lv_obj_set_size(ui->scrHome_labelDate, 255, 37);
    lv_label_set_text(ui->scrHome_labelDate, "25 Jan 2025 14:30");
    lv_label_set_long_mode(ui->scrHome_labelDate, LV_LABEL_LONG_WRAP);

    //Write style for scrHome_labelDate, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelDate, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelDate, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelDate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelDate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelDate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelMCUMode
    ui->scrHome_labelMCUMode = lv_label_create(ui->scrHome_contTop);
    lv_obj_set_pos(ui->scrHome_labelMCUMode, 209, 21);
    lv_obj_set_size(ui->scrHome_labelMCUMode, 249, 37);
    lv_label_set_text(ui->scrHome_labelMCUMode, "比赛/遥控/保护/复位/未知模式");
    lv_label_set_long_mode(ui->scrHome_labelMCUMode, LV_LABEL_LONG_SCROLL);

    //Write style for scrHome_labelMCUMode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelMCUMode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelMCUMode, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelMCUMode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelMCUMode, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelMCUMode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_img_1
    ui->scrHome_img_1 = lv_image_create(ui->scrHome_contTop);
    lv_obj_set_pos(ui->scrHome_img_1, 59, 19);
    lv_obj_set_size(ui->scrHome_img_1, 40, 40);
    lv_obj_add_flag(ui->scrHome_img_1, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scrHome_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_img_1, &_wifi_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40);
    lv_image_set_pivot(ui->scrHome_img_1, 50,50);
    lv_image_set_rotation(ui->scrHome_img_1, 0);

    //Write style for scrHome_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contMain
    ui->scrHome_contMain = lv_obj_create(ui->scrHome);
    lv_obj_set_pos(ui->scrHome_contMain, 33, 75);
    lv_obj_set_size(ui->scrHome_contMain, 733, 247);
    lv_obj_set_scrollbar_mode(ui->scrHome_contMain, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contMain, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contCopy
    ui->scrHome_contCopy = lv_obj_create(ui->scrHome_contMain);
    lv_obj_set_pos(ui->scrHome_contCopy, 20, 15);
    lv_obj_set_size(ui->scrHome_contCopy, 166, 211);
    lv_obj_set_scrollbar_mode(ui->scrHome_contCopy, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contCopy, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contCopy, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contCopy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contCopy, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contCopy, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->scrHome_contCopy, &_btn_bg_1_RGB565A8_166x211, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->scrHome_contCopy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgIconCopy
    ui->scrHome_imgIconCopy = lv_image_create(ui->scrHome_contCopy);
    lv_obj_set_pos(ui->scrHome_imgIconCopy, 70, 30);
    lv_obj_set_size(ui->scrHome_imgIconCopy, 64, 64);
    lv_obj_add_flag(ui->scrHome_imgIconCopy, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrHome_imgIconCopy, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgIconCopy, &_rocket_launch_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);
    lv_image_set_pivot(ui->scrHome_imgIconCopy, 50,50);
    lv_image_set_rotation(ui->scrHome_imgIconCopy, 0);

    //Write style for scrHome_imgIconCopy, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgIconCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgIconCopy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelCopy
    ui->scrHome_labelCopy = lv_label_create(ui->scrHome_contCopy);
    lv_obj_set_pos(ui->scrHome_labelCopy, 18, 157);
    lv_obj_set_size(ui->scrHome_labelCopy, 96, 35);
    lv_obj_add_flag(ui->scrHome_labelCopy, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrHome_labelCopy, "打击");
    lv_label_set_long_mode(ui->scrHome_labelCopy, LV_LABEL_LONG_WRAP);

    //Write style for scrHome_labelCopy, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelCopy, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelCopy, &lv_font_fusionpixellatin_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelCopy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelCopy, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelCopy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contScan
    ui->scrHome_contScan = lv_obj_create(ui->scrHome_contMain);
    lv_obj_set_pos(ui->scrHome_contScan, 195, 15);
    lv_obj_set_size(ui->scrHome_contScan, 166, 211);
    lv_obj_set_scrollbar_mode(ui->scrHome_contScan, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contScan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contScan, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contScan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contScan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contScan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->scrHome_contScan, &_btn_bg_2_RGB565A8_166x211, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->scrHome_contScan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgIconScan
    ui->scrHome_imgIconScan = lv_image_create(ui->scrHome_contScan);
    lv_obj_set_pos(ui->scrHome_imgIconScan, 70, 30);
    lv_obj_set_size(ui->scrHome_imgIconScan, 64, 64);
    lv_obj_add_flag(ui->scrHome_imgIconScan, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrHome_imgIconScan, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgIconScan, &_eye_tracking_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);
    lv_image_set_pivot(ui->scrHome_imgIconScan, 50,50);
    lv_image_set_rotation(ui->scrHome_imgIconScan, 0);

    //Write style for scrHome_imgIconScan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgIconScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgIconScan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelScan
    ui->scrHome_labelScan = lv_label_create(ui->scrHome_contScan);
    lv_obj_set_pos(ui->scrHome_labelScan, 18, 157);
    lv_obj_set_size(ui->scrHome_labelScan, 96, 35);
    lv_obj_add_flag(ui->scrHome_labelScan, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrHome_labelScan, "视觉");
    lv_label_set_long_mode(ui->scrHome_labelScan, LV_LABEL_LONG_WRAP);

    //Write style for scrHome_labelScan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelScan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelScan, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelScan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelScan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelScan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contPrint
    ui->scrHome_contPrint = lv_obj_create(ui->scrHome_contMain);
    lv_obj_set_pos(ui->scrHome_contPrint, 370, 15);
    lv_obj_set_size(ui->scrHome_contPrint, 166, 211);
    lv_obj_set_scrollbar_mode(ui->scrHome_contPrint, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contPrint, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contPrint, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contPrint, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contPrint, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contPrint, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->scrHome_contPrint, &_btn_bg_3_RGB565A8_166x211, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->scrHome_contPrint, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgIconPrint
    ui->scrHome_imgIconPrint = lv_image_create(ui->scrHome_contPrint);
    lv_obj_set_pos(ui->scrHome_imgIconPrint, 70, 30);
    lv_obj_set_size(ui->scrHome_imgIconPrint, 64, 64);
    lv_obj_add_flag(ui->scrHome_imgIconPrint, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrHome_imgIconPrint, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgIconPrint, &_monitoring_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);
    lv_image_set_pivot(ui->scrHome_imgIconPrint, 50,50);
    lv_image_set_rotation(ui->scrHome_imgIconPrint, 0);

    //Write style for scrHome_imgIconPrint, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgIconPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgIconPrint, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelPrint
    ui->scrHome_labelPrint = lv_label_create(ui->scrHome_contPrint);
    lv_obj_set_pos(ui->scrHome_labelPrint, 21, 158);
    lv_obj_set_size(ui->scrHome_labelPrint, 96, 35);
    lv_obj_add_flag(ui->scrHome_labelPrint, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrHome_labelPrint, "统计");
    lv_label_set_long_mode(ui->scrHome_labelPrint, LV_LABEL_LONG_WRAP);

    //Write style for scrHome_labelPrint, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelPrint, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelPrint, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelPrint, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelPrint, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelPrint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_contSetup
    ui->scrHome_contSetup = lv_obj_create(ui->scrHome_contMain);
    lv_obj_set_pos(ui->scrHome_contSetup, 545, 14);
    lv_obj_set_size(ui->scrHome_contSetup, 166, 211);
    lv_obj_set_scrollbar_mode(ui->scrHome_contSetup, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrHome_contSetup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_contSetup, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_contSetup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrHome_contSetup, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrHome_contSetup, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->scrHome_contSetup, &_btn_bg_4_RGB565A8_166x211, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->scrHome_contSetup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_contSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgIconSetup
    ui->scrHome_imgIconSetup = lv_image_create(ui->scrHome_contSetup);
    lv_obj_set_pos(ui->scrHome_imgIconSetup, 70, 30);
    lv_obj_set_size(ui->scrHome_imgIconSetup, 64, 64);
    lv_obj_add_flag(ui->scrHome_imgIconSetup, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_obj_add_flag(ui->scrHome_imgIconSetup, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgIconSetup, &_settings_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);
    lv_image_set_pivot(ui->scrHome_imgIconSetup, 50,50);
    lv_image_set_rotation(ui->scrHome_imgIconSetup, 0);

    //Write style for scrHome_imgIconSetup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgIconSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgIconSetup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_labelSetup
    ui->scrHome_labelSetup = lv_label_create(ui->scrHome_contSetup);
    lv_obj_set_pos(ui->scrHome_labelSetup, 18, 157);
    lv_obj_set_size(ui->scrHome_labelSetup, 111, 35);
    lv_obj_add_flag(ui->scrHome_labelSetup, LV_OBJ_FLAG_EVENT_BUBBLE);
    lv_label_set_text(ui->scrHome_labelSetup, "系统");
    lv_label_set_long_mode(ui->scrHome_labelSetup, LV_LABEL_LONG_WRAP);

    //Write style for scrHome_labelSetup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrHome_labelSetup, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrHome_labelSetup, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrHome_labelSetup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrHome_labelSetup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrHome_labelSetup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrHome_imgAnim
    ui->scrHome_imgAnim = lv_image_create(ui->scrHome);
    lv_obj_set_pos(ui->scrHome_imgAnim, 52, 347);
    lv_obj_set_size(ui->scrHome_imgAnim, 100, 100);
    lv_obj_add_flag(ui->scrHome_imgAnim, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrHome_imgAnim, &_8935DE8FFEC3E00FAE4951382D01C143_RGB565A8_100x100);
    lv_image_set_pivot(ui->scrHome_imgAnim, 50,50);
    lv_image_set_rotation(ui->scrHome_imgAnim, 0);

    //Write style for scrHome_imgAnim, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrHome_imgAnim, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrHome_imgAnim, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scrHome.
    lv_obj_set_style_opa(ui->scrHome_contCopy, 0, 0);
    lv_obj_align(ui->scrHome_imgIconCopy, LV_ALIGN_TOP_RIGHT, -25, 25);
    lv_obj_align(ui->scrHome_labelCopy, LV_ALIGN_BOTTOM_LEFT, 25, -25);
    lv_obj_set_style_transform_pivot_x(ui->scrHome_contCopy, lv_obj_get_width(ui->scrHome_contCopy) / 2, 0);
    lv_obj_set_style_transform_pivot_y(ui->scrHome_contCopy, lv_obj_get_height(ui->scrHome_contCopy) / 2, 0);

    lv_obj_set_style_opa(ui->scrHome_contScan, 0, 0);
    lv_obj_align(ui->scrHome_imgIconScan, LV_ALIGN_TOP_RIGHT, -25, 25);
    lv_obj_align(ui->scrHome_labelScan, LV_ALIGN_BOTTOM_LEFT, 25, -25);
    lv_obj_set_style_transform_pivot_x(ui->scrHome_contScan, lv_obj_get_width(ui->scrHome_contScan) / 2, 0);
    lv_obj_set_style_transform_pivot_y(ui->scrHome_contScan, lv_obj_get_height(ui->scrHome_contScan) / 2, 0);

    lv_obj_set_style_opa(ui->scrHome_contPrint, 0, 0);
    lv_obj_align(ui->scrHome_imgIconPrint, LV_ALIGN_TOP_RIGHT, -25, 25);
    lv_obj_align(ui->scrHome_labelPrint, LV_ALIGN_BOTTOM_LEFT, 25, -25);
    lv_obj_set_style_transform_pivot_x(ui->scrHome_contPrint, lv_obj_get_width(ui->scrHome_contPrint) / 2, 0);
    lv_obj_set_style_transform_pivot_y(ui->scrHome_contPrint, lv_obj_get_height(ui->scrHome_contPrint) / 2, 0);

    lv_obj_set_style_opa(ui->scrHome_contSetup, 0, 0);
    lv_obj_align(ui->scrHome_imgIconSetup, LV_ALIGN_TOP_RIGHT, -25, 25);
    lv_obj_align(ui->scrHome_labelSetup, LV_ALIGN_BOTTOM_LEFT, 25, -25);
    lv_obj_set_style_transform_pivot_x(ui->scrHome_contSetup, lv_obj_get_width(ui->scrHome_contSetup) / 2, 0);
    lv_obj_set_style_transform_pivot_y(ui->scrHome_contSetup, lv_obj_get_height(ui->scrHome_contSetup) / 2, 0);

    //Update current screen layout.
    lv_obj_update_layout(ui->scrHome);

    //Init events for screen.
    events_init_scrHome(ui);
}
