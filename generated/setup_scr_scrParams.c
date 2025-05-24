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



void setup_scr_scrParams(lv_ui *ui)
{
    //Write codes scrParams
    ui->scrParams = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrParams, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrParams, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParams, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParams, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_contBG
    ui->scrParams_contBG = lv_obj_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_contBG, 0, 0);
    lv_obj_set_size(ui->scrParams_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrParams_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParams_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_imgbtnEdit
    ui->scrParams_imgbtnEdit = lv_imagebutton_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_imgbtnEdit, 551, 23);
    lv_obj_set_size(ui->scrParams_imgbtnEdit, 40, 40);
    lv_obj_add_flag(ui->scrParams_imgbtnEdit, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->scrParams_imgbtnEdit, LV_IMAGEBUTTON_STATE_RELEASED, &_edit_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParams_imgbtnEdit, LV_IMAGEBUTTON_STATE_PRESSED, &_edit_24dp_904E29_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParams_imgbtnEdit, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_edit_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParams_imgbtnEdit, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_edit_24dp_904E29_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40, NULL, NULL);
    ui->scrParams_imgbtnEdit_label = lv_label_create(ui->scrParams_imgbtnEdit);
    lv_label_set_text(ui->scrParams_imgbtnEdit_label, "");
    lv_label_set_long_mode(ui->scrParams_imgbtnEdit_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParams_imgbtnEdit_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParams_imgbtnEdit, 0, LV_STATE_DEFAULT);

    //Write style for scrParams_imgbtnEdit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrParams_imgbtnEdit, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_imgbtnEdit, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_imgbtnEdit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_imgbtnEdit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_imgbtnEdit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParams_imgbtnEdit, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scrParams_imgbtnEdit, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scrParams_imgbtnEdit, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scrParams_imgbtnEdit, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scrParams_imgbtnEdit, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scrParams_imgbtnEdit, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scrParams_imgbtnEdit, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scrParams_imgbtnEdit, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scrParams_imgbtnEdit, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scrParams_imgbtnEdit, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scrParams_imgbtnEdit, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scrParams_imgbtnEdit, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scrParams_imgbtnEdit, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scrParams_imgbtnEdit, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scrParams_imgbtnEdit, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scrParams_imgbtnEdit, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scrParams_imgbtnEdit, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scrParams_imgbtnExport
    ui->scrParams_imgbtnExport = lv_imagebutton_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_imgbtnExport, 681, 23);
    lv_obj_set_size(ui->scrParams_imgbtnExport, 40, 40);
    lv_obj_add_flag(ui->scrParams_imgbtnExport, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->scrParams_imgbtnExport, LV_IMAGEBUTTON_STATE_RELEASED, &_upload_24dp_F3F3F3_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParams_imgbtnExport, LV_IMAGEBUTTON_STATE_PRESSED, &_upload_24dp_904E29_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParams_imgbtnExport, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_upload_24dp_F3F3F3_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40, NULL, NULL);
    lv_imagebutton_set_src(ui->scrParams_imgbtnExport, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_upload_24dp_904E29_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40, NULL, NULL);
    ui->scrParams_imgbtnExport_label = lv_label_create(ui->scrParams_imgbtnExport);
    lv_label_set_text(ui->scrParams_imgbtnExport_label, "");
    lv_label_set_long_mode(ui->scrParams_imgbtnExport_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParams_imgbtnExport_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParams_imgbtnExport, 0, LV_STATE_DEFAULT);

    //Write style for scrParams_imgbtnExport, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrParams_imgbtnExport, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_imgbtnExport, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_imgbtnExport, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_imgbtnExport, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_imgbtnExport, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParams_imgbtnExport, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scrParams_imgbtnExport, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scrParams_imgbtnExport, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scrParams_imgbtnExport, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scrParams_imgbtnExport, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scrParams_imgbtnExport, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scrParams_imgbtnExport, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scrParams_imgbtnExport, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scrParams_imgbtnExport, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scrParams_imgbtnExport, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scrParams_imgbtnExport, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scrParams_imgbtnExport, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scrParams_imgbtnExport, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scrParams_imgbtnExport, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scrParams_imgbtnExport, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scrParams_imgbtnExport, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scrParams_imgbtnExport, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scrParams_labelTitle
    ui->scrParams_labelTitle = lv_label_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_labelTitle, 91, 23);
    lv_obj_set_size(ui->scrParams_labelTitle, 386, 49);
    lv_label_set_text(ui->scrParams_labelTitle, "打击");
    lv_label_set_long_mode(ui->scrParams_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrParams_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParams_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_labelTitle, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_btnBack
    ui->scrParams_btnBack = lv_button_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_btnBack, 33, 0);
    lv_obj_set_size(ui->scrParams_btnBack, 85, 67);
    ui->scrParams_btnBack_label = lv_label_create(ui->scrParams_btnBack);
    lv_label_set_text(ui->scrParams_btnBack_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->scrParams_btnBack_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrParams_btnBack_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrParams_btnBack, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrParams_btnBack_label, LV_PCT(100));

    //Write style for scrParams_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParams_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParams_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_btnBack, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParams_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_btnBack, &lv_font_fusionpixelzhhans_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_tabviewParamsSelect
    ui->scrParams_tabviewParamsSelect = lv_tabview_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_tabviewParamsSelect, 351, 13);
    lv_obj_set_size(ui->scrParams_tabviewParamsSelect, 173, 52);
    lv_obj_set_scrollbar_mode(ui->scrParams_tabviewParamsSelect, LV_SCROLLBAR_MODE_OFF);
    lv_tabview_set_tab_bar_position(ui->scrParams_tabviewParamsSelect, LV_DIR_TOP);
    lv_tabview_set_tab_bar_size(ui->scrParams_tabviewParamsSelect, 50);

    //Write style for scrParams_tabviewParamsSelect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrParams_tabviewParamsSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams_tabviewParamsSelect, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tabviewParamsSelect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParams_tabviewParamsSelect, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_tabviewParamsSelect, &lv_font_fusionpixelzhhans_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_tabviewParamsSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParams_tabviewParamsSelect, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrParams_tabviewParamsSelect, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParams_tabviewParamsSelect, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParams_tabviewParamsSelect, 100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParams_tabviewParamsSelect, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParams_tabviewParamsSelect, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_tabviewParamsSelect, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_tabviewParamsSelect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrParams_tabviewParamsSelect_extra_btnm_main_default
    static lv_style_t style_scrParams_tabviewParamsSelect_extra_btnm_main_default;
    ui_init_style(&style_scrParams_tabviewParamsSelect_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_scrParams_tabviewParamsSelect_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_scrParams_tabviewParamsSelect_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrParams_tabviewParamsSelect_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scrParams_tabviewParamsSelect_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_scrParams_tabviewParamsSelect_extra_btnm_main_default, 10);
    lv_obj_add_style(lv_tabview_get_tab_bar(ui->scrParams_tabviewParamsSelect), &style_scrParams_tabviewParamsSelect_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrParams_tabviewParamsSelect_extra_btnm_items_default
    static lv_style_t style_scrParams_tabviewParamsSelect_extra_btnm_items_default;
    ui_init_style(&style_scrParams_tabviewParamsSelect_extra_btnm_items_default);

    lv_style_set_text_color(&style_scrParams_tabviewParamsSelect_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_scrParams_tabviewParamsSelect_extra_btnm_items_default, &lv_font_fusionpixelzhhans_20);
    lv_style_set_text_opa(&style_scrParams_tabviewParamsSelect_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_bar(ui->scrParams_tabviewParamsSelect), &style_scrParams_tabviewParamsSelect_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scrParams_tabviewParamsSelect_extra_btnm_items_checked
    static lv_style_t style_scrParams_tabviewParamsSelect_extra_btnm_items_checked;
    ui_init_style(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked);

    lv_style_set_text_color(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, lv_color_hex(0x2f3243));
    lv_style_set_text_font(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, &lv_font_fusionpixelzhhans_20);
    lv_style_set_text_opa(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, lv_color_hex(0x2f3243));
    lv_style_set_border_side(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, lv_color_hex(0x2f3243));
    lv_style_set_bg_grad_dir(&style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_bar(ui->scrParams_tabviewParamsSelect), &style_scrParams_tabviewParamsSelect_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes 参数
    ui->scrParams_tabviewParamsSelect_tab_1 = lv_tabview_add_tab(ui->scrParams_tabviewParamsSelect,"参数");
    lv_obj_t * scrParams_tabviewParamsSelect_tab_1_label = lv_label_create(ui->scrParams_tabviewParamsSelect_tab_1);
    lv_label_set_text(scrParams_tabviewParamsSelect_tab_1_label, "con1");

    //Write codes 协议
    ui->scrParams_tabviewParamsSelect_tab_2 = lv_tabview_add_tab(ui->scrParams_tabviewParamsSelect,"协议");
    lv_obj_t * scrParams_tabviewParamsSelect_tab_2_label = lv_label_create(ui->scrParams_tabviewParamsSelect_tab_2);
    lv_label_set_text(scrParams_tabviewParamsSelect_tab_2_label, "con2");

    //Write codes scrParams_contDartStatus
    ui->scrParams_contDartStatus = lv_obj_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_contDartStatus, 54, 142);
    lv_obj_set_size(ui->scrParams_contDartStatus, 334, 308);
    lv_obj_set_scrollbar_mode(ui->scrParams_contDartStatus, LV_SCROLLBAR_MODE_AUTO);
    lv_obj_add_flag(ui->scrParams_contDartStatus, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(ui->scrParams_contDartStatus, LV_OBJ_FLAG_SCROLL_MOMENTUM);

    //Write style for scrParams_contDartStatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParams_contDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_contDartStatus, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_contDartStatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams_contDartStatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_contDartStatus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_contDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_contDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_contDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_contDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_contDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_label_1
    ui->scrParams_label_1 = lv_label_create(ui->scrParams_contDartStatus);
    lv_obj_set_pos(ui->scrParams_label_1, 24, 17);
    lv_obj_set_size(ui->scrParams_label_1, 100, 32);
    lv_label_set_text(ui->scrParams_label_1, "系统状态变量");
    lv_label_set_long_mode(ui->scrParams_label_1, LV_LABEL_LONG_WRAP);

    //Write style for scrParams_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParams_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_label_1, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_tableDartStatus
    ui->scrParams_tableDartStatus = lv_table_create(ui->scrParams_contDartStatus);
    lv_obj_set_pos(ui->scrParams_tableDartStatus, 20, 54);
    lv_obj_set_scrollbar_mode(ui->scrParams_tableDartStatus, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrParams_tableDartStatus,2);
    lv_table_set_row_count(ui->scrParams_tableDartStatus,1);
    lv_table_set_cell_value(ui->scrParams_tableDartStatus,0,0,"状态名");
    lv_table_set_cell_value(ui->scrParams_tableDartStatus,0,1,"参数值");

    //Write style for scrParams_tableDartStatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartStatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams_tableDartStatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tableDartStatus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParams_tableDartStatus, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartStatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParams_tableDartStatus, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParams_tableDartStatus, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParams_tableDartStatus, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_pad_top(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartStatus, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParams_tableDartStatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tableDartStatus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartStatus, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartStatus, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartStatus, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartStatus, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrParams_tableDartStatus, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_pad_top(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartStatus, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrParams_tableDartStatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tableDartStatus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartStatus, 2, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartStatus, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartStatus, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartStatus, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrParams_tableDartStatus, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style for scrParams_tableDartStatus, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrParams_tableDartStatus, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_tableDartStatus, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_tableDartStatus, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_tableDartStatus, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParams_tableDartStatus, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartStatus, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParams_tableDartStatus, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParams_tableDartStatus, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style for scrParams_tableDartStatus, Part: LV_PART_ITEMS, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scrParams_tableDartStatus, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrParams_tableDartStatus, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrParams_tableDartStatus, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->scrParams_tableDartStatus, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartStatus, 1, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartStatus, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartStatus, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartStatus, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);

    //Write style for scrParams_tableDartStatus, Part: LV_PART_ITEMS, State: LV_STATE_DISABLED.
    lv_obj_set_style_text_color(ui->scrParams_tableDartStatus, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrParams_tableDartStatus, &lv_font_fusionpixelzhhans_16, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrParams_tableDartStatus, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrParams_tableDartStatus, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartStatus, 0, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartStatus, 3, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartStatus, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartStatus, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartStatus, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartStatus, 10, LV_PART_ITEMS|LV_STATE_DISABLED);

    //Write codes scrParams_contPanel
    ui->scrParams_contPanel = lv_obj_create(ui->scrParams);
    lv_obj_set_pos(ui->scrParams_contPanel, 411, 142);
    lv_obj_set_size(ui->scrParams_contPanel, 334, 311);
    lv_obj_set_scrollbar_mode(ui->scrParams_contPanel, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrParams_contPanel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParams_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_contPanel, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_contPanel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams_contPanel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_contPanel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrParams_tableDartParams
    ui->scrParams_tableDartParams = lv_table_create(ui->scrParams_contPanel);
    lv_obj_set_pos(ui->scrParams_tableDartParams, 20, 54);
    lv_obj_set_scrollbar_mode(ui->scrParams_tableDartParams, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrParams_tableDartParams,2);
    lv_table_set_row_count(ui->scrParams_tableDartParams,3);
    lv_table_set_cell_value(ui->scrParams_tableDartParams,0,0,"状态名");
    lv_table_set_cell_value(ui->scrParams_tableDartParams,1,0,"target_yaw_angle");
    lv_table_set_cell_value(ui->scrParams_tableDartParams,2,0,"target_yaw_offset");
    lv_table_set_cell_value(ui->scrParams_tableDartParams,0,1,"参数值");
    lv_table_set_cell_value(ui->scrParams_tableDartParams,1,1,"114514");
    lv_table_set_cell_value(ui->scrParams_tableDartParams,2,1,"2000");

    //Write style for scrParams_tableDartParams, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartParams, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrParams_tableDartParams, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tableDartParams, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParams_tableDartParams, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartParams, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParams_tableDartParams, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParams_tableDartParams, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrParams_tableDartParams, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_pad_top(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartParams, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrParams_tableDartParams, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tableDartParams, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartParams, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartParams, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartParams, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartParams, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrParams_tableDartParams, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_pad_top(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartParams, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrParams_tableDartParams, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrParams_tableDartParams, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartParams, 2, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartParams, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartParams, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartParams, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrParams_tableDartParams, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style for scrParams_tableDartParams, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrParams_tableDartParams, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_tableDartParams, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_tableDartParams, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_tableDartParams, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrParams_tableDartParams, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartParams, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrParams_tableDartParams, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrParams_tableDartParams, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style for scrParams_tableDartParams, Part: LV_PART_ITEMS, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scrParams_tableDartParams, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrParams_tableDartParams, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrParams_tableDartParams, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->scrParams_tableDartParams, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartParams, 1, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartParams, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartParams, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartParams, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);

    //Write style for scrParams_tableDartParams, Part: LV_PART_ITEMS, State: LV_STATE_DISABLED.
    lv_obj_set_style_text_color(ui->scrParams_tableDartParams, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrParams_tableDartParams, &lv_font_fusionpixelzhhans_16, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrParams_tableDartParams, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrParams_tableDartParams, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrParams_tableDartParams, 0, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrParams_tableDartParams, 3, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrParams_tableDartParams, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrParams_tableDartParams, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrParams_tableDartParams, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrParams_tableDartParams, 10, LV_PART_ITEMS|LV_STATE_DISABLED);

    //Write codes scrParams_label_2
    ui->scrParams_label_2 = lv_label_create(ui->scrParams_contPanel);
    lv_obj_set_pos(ui->scrParams_label_2, 24, 17);
    lv_obj_set_size(ui->scrParams_label_2, 100, 32);
    lv_label_set_text(ui->scrParams_label_2, "打击参数协议");
    lv_label_set_long_mode(ui->scrParams_label_2, LV_LABEL_LONG_WRAP);

    //Write style for scrParams_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrParams_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrParams_label_2, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrParams_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrParams_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrParams_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scrParams.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrParams);

    //Init events for screen.
    events_init_scrParams(ui);
}
