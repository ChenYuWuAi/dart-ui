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



void setup_scr_scrLoader(lv_ui *ui)
{
    //Write codes scrLoader
    ui->scrLoader = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrLoader, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrLoader, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrLoader, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrLoader, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrLoader, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrLoader, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrLoader_contBG
    ui->scrLoader_contBG = lv_obj_create(ui->scrLoader);
    lv_obj_set_pos(ui->scrLoader_contBG, 0, 0);
    lv_obj_set_size(ui->scrLoader_contBG, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrLoader_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrLoader_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrLoader_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrLoader_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrLoader_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrLoader_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrLoader_label_1
    ui->scrLoader_label_1 = lv_label_create(ui->scrLoader_contBG);
    lv_obj_set_pos(ui->scrLoader_label_1, 200, 348);
    lv_obj_set_size(ui->scrLoader_label_1, 413, 44);
    lv_label_set_text(ui->scrLoader_label_1, "配置/激活节点...");
    lv_label_set_long_mode(ui->scrLoader_label_1, LV_LABEL_LONG_WRAP);

    //Write style for scrLoader_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrLoader_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrLoader_label_1, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrLoader_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrLoader_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrLoader_label_1, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_border_width(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->scrLoader_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrLoader_label_1, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrLoader_label_1, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_letter_space(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_line_space(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrLoader_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrLoader_label_1, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes scrLoader_arcLoader
    ui->scrLoader_arcLoader = lv_arc_create(ui->scrLoader);
    lv_obj_set_pos(ui->scrLoader_arcLoader, 300, 50);
    lv_obj_set_size(ui->scrLoader_arcLoader, 200, 200);
    lv_arc_set_mode(ui->scrLoader_arcLoader, LV_ARC_MODE_NORMAL);
    lv_arc_set_range(ui->scrLoader_arcLoader, 0, 100);
    lv_arc_set_bg_angles(ui->scrLoader_arcLoader, 0, 360);
    lv_arc_set_value(ui->scrLoader_arcLoader, 0);
    lv_arc_set_rotation(ui->scrLoader_arcLoader, -90);

    //Write style for scrLoader_arcLoader, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrLoader_arcLoader, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrLoader_arcLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrLoader_arcLoader, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_arc_width(ui->scrLoader_arcLoader, 4, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->scrLoader_arcLoader, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->scrLoader_arcLoader, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->scrLoader_arcLoader, true, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for scrLoader_arcLoader, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrLoader_arcLoader, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes scrLoader_labelLoader
    ui->scrLoader_labelLoader = lv_label_create(ui->scrLoader);
    lv_obj_set_pos(ui->scrLoader_labelLoader, 349, 135);
    lv_obj_set_size(ui->scrLoader_labelLoader, 108, 47);
    lv_label_set_text(ui->scrLoader_labelLoader, "0%");
    lv_label_set_long_mode(ui->scrLoader_labelLoader, LV_LABEL_LONG_WRAP);

    //Write style for scrLoader_labelLoader, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrLoader_labelLoader, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrLoader_labelLoader, &lv_font_fusionpixellatin_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrLoader_labelLoader, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrLoader_labelLoader, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrLoader_labelLoader, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_border_width(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->scrLoader_labelLoader, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrLoader_labelLoader, &lv_font_fusionpixellatin_26, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrLoader_labelLoader, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_letter_space(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_line_space(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrLoader_labelLoader, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrLoader_labelLoader, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes scrLoader_labelPrompt
    ui->scrLoader_labelPrompt = lv_label_create(ui->scrLoader);
    lv_obj_set_pos(ui->scrLoader_labelPrompt, 192, 287);
    lv_obj_set_size(ui->scrLoader_labelPrompt, 413, 44);
    lv_label_set_text(ui->scrLoader_labelPrompt, "正在启动，请等待");
    lv_label_set_long_mode(ui->scrLoader_labelPrompt, LV_LABEL_LONG_WRAP);

    //Write style for scrLoader_labelPrompt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrLoader_labelPrompt, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrLoader_labelPrompt, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrLoader_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrLoader_labelPrompt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrLoader_labelPrompt, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_border_width(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->scrLoader_labelPrompt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrLoader_labelPrompt, &lv_font_fusionpixelzhhans_26, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrLoader_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_letter_space(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_line_space(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrLoader_labelPrompt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrLoader_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //The custom code of scrLoader.


    //Update current screen layout.
    lv_obj_update_layout(ui->scrLoader);

    //Init events for screen.
    events_init_scrLoader(ui);
}
