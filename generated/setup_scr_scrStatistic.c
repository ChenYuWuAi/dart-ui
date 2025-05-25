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
#include "custom.h"


void setup_scr_scrStatistic(lv_ui *ui)
{
    //Write codes scrStatistic
    ui->scrStatistic = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrStatistic, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrStatistic, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrStatistic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrStatistic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_contBG
    ui->scrStatistic_contBG = lv_obj_create(ui->scrStatistic);
    lv_obj_set_pos(ui->scrStatistic_contBG, 0, 0);
    lv_obj_set_size(ui->scrStatistic_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrStatistic_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrStatistic_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_contScroll
    ui->scrStatistic_contScroll = lv_obj_create(ui->scrStatistic);
    lv_obj_set_pos(ui->scrStatistic_contScroll, 0, 88);
    lv_obj_set_size(ui->scrStatistic_contScroll, 800, 392);
    lv_obj_set_scrollbar_mode(ui->scrStatistic_contScroll, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrStatistic_contScroll, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_contScroll, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_contLifeSpan
    ui->scrStatistic_contLifeSpan = lv_obj_create(ui->scrStatistic_contScroll);
    lv_obj_set_pos(ui->scrStatistic_contLifeSpan, 532, 50);
    lv_obj_set_size(ui->scrStatistic_contLifeSpan, 314, 282);
    lv_obj_set_scrollbar_mode(ui->scrStatistic_contLifeSpan, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrStatistic_contLifeSpan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_contLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_contLifeSpan, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_contLifeSpan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_contLifeSpan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_contLifeSpan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_contLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_contLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_contLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_contLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_contLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_tableLifeSpan
    ui->scrStatistic_tableLifeSpan = lv_table_create(ui->scrStatistic_contLifeSpan);
    lv_obj_set_pos(ui->scrStatistic_tableLifeSpan, 20, 54);
    lv_obj_set_scrollbar_mode(ui->scrStatistic_tableLifeSpan, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrStatistic_tableLifeSpan,2);
    lv_table_set_row_count(ui->scrStatistic_tableLifeSpan,7);
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,0,0,"元件");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,1,0,"总发射次数");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,2,0,"滑台");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,3,0,"扳机");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,4,0,"缓冲打印件");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,5,0,"下滑块");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,6,0,"皮筋");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,0,1,"次数");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,1,1,"0");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,2,1,"0");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,3,1,"0");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,4,1,"0");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,5,1,"0");
    lv_table_set_cell_value(ui->scrStatistic_tableLifeSpan,6,1,"0");

    //Write style for scrStatistic_tableLifeSpan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_tableLifeSpan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_tableLifeSpan, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrStatistic_tableLifeSpan, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrStatistic_tableLifeSpan, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_pad_top(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_tableLifeSpan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableLifeSpan, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableLifeSpan, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrStatistic_tableLifeSpan, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_pad_top(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_tableLifeSpan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableLifeSpan, 2, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableLifeSpan, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrStatistic_tableLifeSpan, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style for scrStatistic_tableLifeSpan, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_tableLifeSpan, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_tableLifeSpan, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_tableLifeSpan, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrStatistic_tableLifeSpan, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style for scrStatistic_tableLifeSpan, Part: LV_PART_ITEMS, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrStatistic_tableLifeSpan, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->scrStatistic_tableLifeSpan, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableLifeSpan, 1, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableLifeSpan, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);

    //Write style for scrStatistic_tableLifeSpan, Part: LV_PART_ITEMS, State: LV_STATE_DISABLED.
    lv_obj_set_style_text_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrStatistic_tableLifeSpan, &lv_font_fusionpixelzhhans_16, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrStatistic_tableLifeSpan, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableLifeSpan, 0, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableLifeSpan, 3, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableLifeSpan, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableLifeSpan, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableLifeSpan, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableLifeSpan, 10, LV_PART_ITEMS|LV_STATE_DISABLED);

    //Write codes scrStatistic_labelLifeSpan
    ui->scrStatistic_labelLifeSpan = lv_label_create(ui->scrStatistic_contLifeSpan);
    lv_obj_set_pos(ui->scrStatistic_labelLifeSpan, 24, 17);
    lv_obj_set_size(ui->scrStatistic_labelLifeSpan, 100, 32);
    lv_label_set_text(ui->scrStatistic_labelLifeSpan, "元件使用情况");
    lv_label_set_long_mode(ui->scrStatistic_labelLifeSpan, LV_LABEL_LONG_WRAP);

    //Write style for scrStatistic_labelLifeSpan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrStatistic_labelLifeSpan, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_labelLifeSpan, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_labelLifeSpan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_labelLifeSpan, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_labelLifeSpan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_btnLifeSpanClear
    ui->scrStatistic_btnLifeSpanClear = lv_button_create(ui->scrStatistic_contLifeSpan);
    lv_obj_set_pos(ui->scrStatistic_btnLifeSpanClear, 183, 365);
    lv_obj_set_size(ui->scrStatistic_btnLifeSpanClear, 100, 39);
    ui->scrStatistic_btnLifeSpanClear_label = lv_label_create(ui->scrStatistic_btnLifeSpanClear);
    lv_label_set_text(ui->scrStatistic_btnLifeSpanClear_label, "清零");
    lv_label_set_long_mode(ui->scrStatistic_btnLifeSpanClear_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrStatistic_btnLifeSpanClear_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrStatistic_btnLifeSpanClear, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrStatistic_btnLifeSpanClear_label, LV_PCT(100));

    //Write style for scrStatistic_btnLifeSpanClear, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrStatistic_btnLifeSpanClear, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_btnLifeSpanClear, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_btnLifeSpanClear, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_btnLifeSpanClear, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_btnLifeSpanClear, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_btnLifeSpanClear, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrStatistic_btnLifeSpanClear, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_btnLifeSpanClear, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_btnLifeSpanClear, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_btnLifeSpanClear, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_ddlistLifeSpanSelect
    ui->scrStatistic_ddlistLifeSpanSelect = lv_dropdown_create(ui->scrStatistic_contLifeSpan);
    lv_obj_set_pos(ui->scrStatistic_ddlistLifeSpanSelect, 23, 369);
    lv_obj_set_size(ui->scrStatistic_ddlistLifeSpanSelect, 130, 30);
    lv_dropdown_set_options(ui->scrStatistic_ddlistLifeSpanSelect, "总发射次数\n滑台\n扳机\n缓冲打印件\n下滑块\n皮筋");

    //Write style for scrStatistic_ddlistLifeSpanSelect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrStatistic_ddlistLifeSpanSelect, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_ddlistLifeSpanSelect, &lv_font_fusionpixelzhhans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_ddlistLifeSpanSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_ddlistLifeSpanSelect, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrStatistic_ddlistLifeSpanSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrStatistic_ddlistLifeSpanSelect, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrStatistic_ddlistLifeSpanSelect, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_ddlistLifeSpanSelect, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_ddlistLifeSpanSelect, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_ddlistLifeSpanSelect, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_ddlistLifeSpanSelect, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_ddlistLifeSpanSelect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_ddlistLifeSpanSelect, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_ddlistLifeSpanSelect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_ddlistLifeSpanSelect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked
    static lv_style_t style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked;
    ui_init_style(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked);

    lv_style_set_border_width(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scrStatistic_ddlistLifeSpanSelect), &style_scrStatistic_ddlistLifeSpanSelect_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default
    static lv_style_t style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default;
    ui_init_style(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default);

    lv_style_set_max_height(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, &lv_font_fusionpixelzhhans_12);
    lv_style_set_text_opa(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scrStatistic_ddlistLifeSpanSelect), &style_scrStatistic_ddlistLifeSpanSelect_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default
    static lv_style_t style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default;
    ui_init_style(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scrStatistic_ddlistLifeSpanSelect), &style_scrStatistic_ddlistLifeSpanSelect_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scrStatistic_contDartLaunches
    ui->scrStatistic_contDartLaunches = lv_obj_create(ui->scrStatistic_contScroll);
    lv_obj_set_pos(ui->scrStatistic_contDartLaunches, 21, 49);
    lv_obj_set_size(ui->scrStatistic_contDartLaunches, 459, 282);
    lv_obj_set_scrollbar_mode(ui->scrStatistic_contDartLaunches, LV_SCROLLBAR_MODE_AUTO);
    lv_obj_add_flag(ui->scrStatistic_contDartLaunches, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(ui->scrStatistic_contDartLaunches, LV_OBJ_FLAG_SCROLL_MOMENTUM);

    //Write style for scrStatistic_contDartLaunches, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_contDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_contDartLaunches, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_contDartLaunches, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_contDartLaunches, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_contDartLaunches, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_contDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_contDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_contDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_contDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_contDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_labelDartLaunches
    ui->scrStatistic_labelDartLaunches = lv_label_create(ui->scrStatistic_contDartLaunches);
    lv_obj_set_pos(ui->scrStatistic_labelDartLaunches, 24, 17);
    lv_obj_set_size(ui->scrStatistic_labelDartLaunches, 195, 32);
    lv_label_set_text(ui->scrStatistic_labelDartLaunches, "近20次打击");
    lv_label_set_long_mode(ui->scrStatistic_labelDartLaunches, LV_LABEL_LONG_WRAP);

    //Write style for scrStatistic_labelDartLaunches, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrStatistic_labelDartLaunches, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_labelDartLaunches, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_labelDartLaunches, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_labelDartLaunches, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_labelDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_tableDartLaunches
    ui->scrStatistic_tableDartLaunches = lv_table_create(ui->scrStatistic_contDartLaunches);
    lv_obj_set_pos(ui->scrStatistic_tableDartLaunches, 20, 54);
    lv_obj_set_scrollbar_mode(ui->scrStatistic_tableDartLaunches, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scrStatistic_tableDartLaunches,3);
    lv_table_set_row_count(ui->scrStatistic_tableDartLaunches,1);
    lv_table_set_cell_value(ui->scrStatistic_tableDartLaunches,0,0,"序号");
    lv_table_set_cell_value(ui->scrStatistic_tableDartLaunches,0,1,"时间");
    lv_table_set_cell_value(ui->scrStatistic_tableDartLaunches,0,2,"速度");

    //Write style for scrStatistic_tableDartLaunches, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_tableDartLaunches, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_tableDartLaunches, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrStatistic_tableDartLaunches, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrStatistic_tableDartLaunches, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_pad_top(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_tableDartLaunches, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableDartLaunches, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableDartLaunches, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrStatistic_tableDartLaunches, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_pad_top(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scrStatistic_tableDartLaunches, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableDartLaunches, 2, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableDartLaunches, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scrStatistic_tableDartLaunches, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style for scrStatistic_tableDartLaunches, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_tableDartLaunches, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_tableDartLaunches, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_tableDartLaunches, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrStatistic_tableDartLaunches, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style for scrStatistic_tableDartLaunches, Part: LV_PART_ITEMS, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrStatistic_tableDartLaunches, &lv_font_fusionpixelzhhans_24, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->scrStatistic_tableDartLaunches, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableDartLaunches, 1, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableDartLaunches, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_FOCUSED);

    //Write style for scrStatistic_tableDartLaunches, Part: LV_PART_ITEMS, State: LV_STATE_DISABLED.
    lv_obj_set_style_text_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scrStatistic_tableDartLaunches, &lv_font_fusionpixelzhhans_16, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_text_align(ui->scrStatistic_tableDartLaunches, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scrStatistic_tableDartLaunches, 0, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scrStatistic_tableDartLaunches, 3, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scrStatistic_tableDartLaunches, 255, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scrStatistic_tableDartLaunches, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scrStatistic_tableDartLaunches, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scrStatistic_tableDartLaunches, 10, LV_PART_ITEMS|LV_STATE_DISABLED);

    //Write codes scrStatistic_labelTitle
    ui->scrStatistic_labelTitle = lv_label_create(ui->scrStatistic);
    lv_obj_set_pos(ui->scrStatistic_labelTitle, 207, 23);
    lv_obj_set_size(ui->scrStatistic_labelTitle, 386, 49);
    lv_label_set_text(ui->scrStatistic_labelTitle, "统计");
    lv_label_set_long_mode(ui->scrStatistic_labelTitle, LV_LABEL_LONG_WRAP);

    //Write style for scrStatistic_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrStatistic_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_labelTitle, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrStatistic_btnBack
    ui->scrStatistic_btnBack = lv_button_create(ui->scrStatistic);
    lv_obj_set_pos(ui->scrStatistic_btnBack, 33, 0);
    lv_obj_set_size(ui->scrStatistic_btnBack, 85, 67);
    ui->scrStatistic_btnBack_label = lv_label_create(ui->scrStatistic_btnBack);
    lv_label_set_text(ui->scrStatistic_btnBack_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->scrStatistic_btnBack_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrStatistic_btnBack_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrStatistic_btnBack, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrStatistic_btnBack_label, LV_PCT(100));

    //Write style for scrStatistic_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrStatistic_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrStatistic_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrStatistic_btnBack, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrStatistic_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrStatistic_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrStatistic_btnBack, &lv_font_fusionpixelzhhans_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrStatistic_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrStatistic_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scrStatistic.
    lv_obj_add_event_cb(ui->scrStatistic_btnLifeSpanClear, scrStatistic_btnLifeSpanClear_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrStatistic_ddlistLifeSpanSelect, scrStatistic_ddlistLifeSpanSelect_event_handler, LV_EVENT_ALL, ui);

    //Update current screen layout.
    lv_obj_update_layout(ui->scrStatistic);

    //Init events for screen.
    events_init_scrStatistic(ui);
}
