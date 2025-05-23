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



void setup_scr_scrQRCode(lv_ui *ui)
{
    //Write codes scrQRCode
    ui->scrQRCode = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrQRCode, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrQRCode, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrQRCode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrQRCode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrQRCode, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrQRCode, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrQRCode_contBG
    ui->scrQRCode_contBG = lv_obj_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_contBG, 0, 0);
    lv_obj_set_size(ui->scrQRCode_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrQRCode_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrQRCode_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrQRCode_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrQRCode_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrQRCode_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrQRCode_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrQRCode_labelTitle
    ui->scrQRCode_labelTitle = lv_label_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_labelTitle, 135, 22);
    lv_obj_set_size(ui->scrQRCode_labelTitle, 386, 49);
    lv_label_set_text(ui->scrQRCode_labelTitle, "导出打击");
    lv_label_set_long_mode(ui->scrQRCode_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrQRCode_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrQRCode_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrQRCode_labelTitle, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrQRCode_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrQRCode_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrQRCode_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrQRCode_btnBack
    ui->scrQRCode_btnBack = lv_button_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_btnBack, 33, 0);
    lv_obj_set_size(ui->scrQRCode_btnBack, 85, 67);
    ui->scrQRCode_btnBack_label = lv_label_create(ui->scrQRCode_btnBack);
    lv_label_set_text(ui->scrQRCode_btnBack_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->scrQRCode_btnBack_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrQRCode_btnBack_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrQRCode_btnBack, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrQRCode_btnBack_label, LV_PCT(100));

    //Write style for scrQRCode_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrQRCode_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrQRCode_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrQRCode_btnBack, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrQRCode_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrQRCode_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrQRCode_btnBack, &lv_font_montserratMedium_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrQRCode_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrQRCode_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrQRCode_tabviewExportSelect
    ui->scrQRCode_tabviewExportSelect = lv_tabview_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_tabviewExportSelect, 417, 11);
    lv_obj_set_size(ui->scrQRCode_tabviewExportSelect, 173, 52);
    lv_obj_set_scrollbar_mode(ui->scrQRCode_tabviewExportSelect, LV_SCROLLBAR_MODE_OFF);
    lv_tabview_set_tab_bar_position(ui->scrQRCode_tabviewExportSelect, LV_DIR_TOP);
    lv_tabview_set_tab_bar_size(ui->scrQRCode_tabviewExportSelect, 50);

    //Write style for scrQRCode_tabviewExportSelect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrQRCode_tabviewExportSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrQRCode_tabviewExportSelect, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrQRCode_tabviewExportSelect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrQRCode_tabviewExportSelect, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrQRCode_tabviewExportSelect, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrQRCode_tabviewExportSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrQRCode_tabviewExportSelect, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrQRCode_tabviewExportSelect, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrQRCode_tabviewExportSelect, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrQRCode_tabviewExportSelect, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrQRCode_tabviewExportSelect, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrQRCode_tabviewExportSelect, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrQRCode_tabviewExportSelect, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrQRCode_tabviewExportSelect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrQRCode_tabviewExportSelect_extra_btnm_main_default
    static lv_style_t style_scrQRCode_tabviewExportSelect_extra_btnm_main_default;
    ui_init_style(&style_scrQRCode_tabviewExportSelect_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_scrQRCode_tabviewExportSelect_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_scrQRCode_tabviewExportSelect_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrQRCode_tabviewExportSelect_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scrQRCode_tabviewExportSelect_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_scrQRCode_tabviewExportSelect_extra_btnm_main_default, 10);
    lv_obj_add_style(lv_tabview_get_tab_bar(ui->scrQRCode_tabviewExportSelect), &style_scrQRCode_tabviewExportSelect_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrQRCode_tabviewExportSelect_extra_btnm_items_default
    static lv_style_t style_scrQRCode_tabviewExportSelect_extra_btnm_items_default;
    ui_init_style(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_default);

    lv_style_set_text_color(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_default, &lv_font_fusionpixelzhhans_20);
    lv_style_set_text_opa(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_bar(ui->scrQRCode_tabviewExportSelect), &style_scrQRCode_tabviewExportSelect_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked
    static lv_style_t style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked;
    ui_init_style(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked);

    lv_style_set_text_color(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, lv_color_hex(0x2f3243));
    lv_style_set_text_font(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, &lv_font_fusionpixelzhhans_20);
    lv_style_set_text_opa(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, lv_color_hex(0x2f3243));
    lv_style_set_border_side(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, lv_color_hex(0x2f3243));
    lv_style_set_bg_grad_dir(&style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_bar(ui->scrQRCode_tabviewExportSelect), &style_scrQRCode_tabviewExportSelect_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes 参数
    ui->scrQRCode_tabviewExportSelect_tab_1 = lv_tabview_add_tab(ui->scrQRCode_tabviewExportSelect,"参数");
    lv_obj_t * scrQRCode_tabviewExportSelect_tab_1_label = lv_label_create(ui->scrQRCode_tabviewExportSelect_tab_1);
    lv_label_set_text(scrQRCode_tabviewExportSelect_tab_1_label, "con1");

    //Write codes 协议
    ui->scrQRCode_tabviewExportSelect_tab_2 = lv_tabview_add_tab(ui->scrQRCode_tabviewExportSelect,"协议");
    lv_obj_t * scrQRCode_tabviewExportSelect_tab_2_label = lv_label_create(ui->scrQRCode_tabviewExportSelect_tab_2);
    lv_label_set_text(scrQRCode_tabviewExportSelect_tab_2_label, "con2");

    //Write codes scrQRCode_qrcodeExport
    ui->scrQRCode_qrcodeExport = lv_qrcode_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_qrcodeExport, 62, 113);
    lv_obj_set_size(ui->scrQRCode_qrcodeExport, 365, 365);
    lv_qrcode_set_size(ui->scrQRCode_qrcodeExport, 365);
    lv_qrcode_set_dark_color(ui->scrQRCode_qrcodeExport, lv_color_hex(0x2C3224));
    lv_qrcode_set_light_color(ui->scrQRCode_qrcodeExport, lv_color_hex(0xffffff));
    const char * scrQRCode_qrcodeExport_data = "{\n    \"auto_aim_enabled\": true,\n    \"auxiliary_force_offsets\": [\n        0,\n        -600000,\n        -400000,\n        -200000\n    ],\n    \"auxiliary_yaw_offsets\": [\n        0,\n        0,\n        2000,\n        1000\n    ],\n    \"dart_launch_process_offset_begin\": 0,\n    \"dart_launch_process_offset_end\": 3,\n    \"last_param_update_time\": 1747243193470,\n    \"primary_force\": 7900000,\n    \"primary_force_offset\": 0,\n    \"primary_yaw\": 116450,\n    \"target_auto_aim_x_axis\": 355.0\n}";
    lv_qrcode_update(ui->scrQRCode_qrcodeExport, scrQRCode_qrcodeExport_data, 515);

    //Write codes scrQRCode_labelHintExport
    ui->scrQRCode_labelHintExport = lv_label_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_labelHintExport, 410, 391);
    lv_obj_set_size(ui->scrQRCode_labelHintExport, 386, 77);
    lv_label_set_text(ui->scrQRCode_labelHintExport, "请使用DartFlyTuner\n导入二维码参数");
    lv_label_set_long_mode(ui->scrQRCode_labelHintExport, LV_LABEL_LONG_WRAP);

    //Write style for scrQRCode_labelHintExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrQRCode_labelHintExport, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrQRCode_labelHintExport, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrQRCode_labelHintExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrQRCode_labelHintExport, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrQRCode_labelHintExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrQRCode_imgIKUYO
    ui->scrQRCode_imgIKUYO = lv_image_create(ui->scrQRCode);
    lv_obj_set_pos(ui->scrQRCode_imgIKUYO, 484, 137);
    lv_obj_set_size(ui->scrQRCode_imgIKUYO, 239, 235);
    lv_obj_add_flag(ui->scrQRCode_imgIKUYO, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scrQRCode_imgIKUYO, &_Camera_XHS_17465037706701040g2sg31fcdj4a2medg5oo7_RGB565A8_239x235);
    lv_image_set_pivot(ui->scrQRCode_imgIKUYO, 50,50);
    lv_image_set_rotation(ui->scrQRCode_imgIKUYO, 0);

    //Write style for scrQRCode_imgIKUYO, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scrQRCode_imgIKUYO, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scrQRCode_imgIKUYO, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scrQRCode.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrQRCode);

    //Init events for screen.
    events_init_scrQRCode(ui);
}
