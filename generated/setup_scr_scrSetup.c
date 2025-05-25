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


void setup_scr_scrSetup(lv_ui *ui)
{
    //Write codes scrSetup
    ui->scrSetup = lv_obj_create(NULL);
    lv_obj_set_size(ui->scrSetup, 800, 480);
    lv_obj_set_scrollbar_mode(ui->scrSetup, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrSetup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_contBG
    ui->scrSetup_contBG = lv_obj_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_contBG, 0, 0);
    lv_obj_set_size(ui->scrSetup_contBG, 800, 88);
    lv_obj_set_scrollbar_mode(ui->scrSetup_contBG, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrSetup_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrSetup_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_contBG, lv_color_hex(0xe12e2e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_labelPrompt
    ui->scrSetup_labelPrompt = lv_label_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_labelPrompt, 157, 23);
    lv_obj_set_size(ui->scrSetup_labelPrompt, 485, 47);
    lv_label_set_text(ui->scrSetup_labelPrompt, "高级系统设置");
    lv_label_set_long_mode(ui->scrSetup_labelPrompt, LV_LABEL_LONG_WRAP);

    //Write style for scrSetup_labelPrompt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_labelPrompt, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_labelPrompt, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_labelPrompt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_btnBack
    ui->scrSetup_btnBack = lv_button_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_btnBack, 33, 0);
    lv_obj_set_size(ui->scrSetup_btnBack, 85, 67);
    ui->scrSetup_btnBack_label = lv_label_create(ui->scrSetup_btnBack);
    lv_label_set_text(ui->scrSetup_btnBack_label, "" LV_SYMBOL_LEFT " ");
    lv_label_set_long_mode(ui->scrSetup_btnBack_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrSetup_btnBack_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrSetup_btnBack, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrSetup_btnBack_label, LV_PCT(100));

    //Write style for scrSetup_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrSetup_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_btnBack, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_btnBack, &lv_font_fusionpixelzhhans_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_contPanel
    ui->scrSetup_contPanel = lv_obj_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_contPanel, 398, 113);
    lv_obj_set_size(ui->scrSetup_contPanel, 343, 315);
    lv_obj_set_scrollbar_mode(ui->scrSetup_contPanel, LV_SCROLLBAR_MODE_OFF);

    //Write style for scrSetup_contPanel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrSetup_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_contPanel, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrSetup_contPanel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_contPanel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_contPanel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrSetup_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrSetup_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrSetup_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrSetup_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_contPanel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_btnPowerOff
    ui->scrSetup_btnPowerOff = lv_button_create(ui->scrSetup_contPanel);
    lv_obj_set_pos(ui->scrSetup_btnPowerOff, 189, 20);
    lv_obj_set_size(ui->scrSetup_btnPowerOff, 120, 120);
    ui->scrSetup_btnPowerOff_label = lv_label_create(ui->scrSetup_btnPowerOff);
    lv_label_set_text(ui->scrSetup_btnPowerOff_label, "关机");
    lv_label_set_long_mode(ui->scrSetup_btnPowerOff_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrSetup_btnPowerOff_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrSetup_btnPowerOff, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrSetup_btnPowerOff_label, LV_PCT(100));

    //Write style for scrSetup_btnPowerOff, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup_btnPowerOff, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_btnPowerOff, lv_color_hex(0x098D6B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_btnPowerOff, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrSetup_btnPowerOff, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_btnPowerOff, 19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_btnPowerOff, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scrSetup_btnPowerOff, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scrSetup_btnPowerOff, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scrSetup_btnPowerOff, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scrSetup_btnPowerOff, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scrSetup_btnPowerOff, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_btnPowerOff, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_btnPowerOff, &lv_font_fusionpixelzhhans_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_btnPowerOff, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_btnPowerOff, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_btnRestartService
    ui->scrSetup_btnRestartService = lv_button_create(ui->scrSetup_contPanel);
    lv_obj_set_pos(ui->scrSetup_btnRestartService, 42, 20);
    lv_obj_set_size(ui->scrSetup_btnRestartService, 120, 120);
    ui->scrSetup_btnRestartService_label = lv_label_create(ui->scrSetup_btnRestartService);
    lv_label_set_text(ui->scrSetup_btnRestartService_label, "重启服务");
    lv_label_set_long_mode(ui->scrSetup_btnRestartService_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrSetup_btnRestartService_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrSetup_btnRestartService, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrSetup_btnRestartService_label, LV_PCT(100));

    //Write style for scrSetup_btnRestartService, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup_btnRestartService, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_btnRestartService, lv_color_hex(0x938810), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_btnRestartService, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrSetup_btnRestartService, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_btnRestartService, 19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_btnRestartService, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scrSetup_btnRestartService, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scrSetup_btnRestartService, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scrSetup_btnRestartService, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scrSetup_btnRestartService, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scrSetup_btnRestartService, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_btnRestartService, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_btnRestartService, &lv_font_fusionpixelzhhans_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_btnRestartService, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_btnRestartService, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_btnGnome
    ui->scrSetup_btnGnome = lv_button_create(ui->scrSetup_contPanel);
    lv_obj_set_pos(ui->scrSetup_btnGnome, 42, 166);
    lv_obj_set_size(ui->scrSetup_btnGnome, 120, 120);
    ui->scrSetup_btnGnome_label = lv_label_create(ui->scrSetup_btnGnome);
    lv_label_set_text(ui->scrSetup_btnGnome_label, "Gnome");
    lv_label_set_long_mode(ui->scrSetup_btnGnome_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrSetup_btnGnome_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrSetup_btnGnome, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrSetup_btnGnome_label, LV_PCT(100));

    //Write style for scrSetup_btnGnome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup_btnGnome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_btnGnome, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_btnGnome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrSetup_btnGnome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_btnGnome, 19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_btnGnome, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scrSetup_btnGnome, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scrSetup_btnGnome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scrSetup_btnGnome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scrSetup_btnGnome, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scrSetup_btnGnome, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_btnGnome, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_btnGnome, &lv_font_fusionpixelzhhans_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_btnGnome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_btnGnome, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_btnSSIDConnect
    ui->scrSetup_btnSSIDConnect = lv_button_create(ui->scrSetup_contPanel);
    lv_obj_set_pos(ui->scrSetup_btnSSIDConnect, 189, 167);
    lv_obj_set_size(ui->scrSetup_btnSSIDConnect, 120, 120);
    ui->scrSetup_btnSSIDConnect_label = lv_label_create(ui->scrSetup_btnSSIDConnect);
    lv_label_set_text(ui->scrSetup_btnSSIDConnect_label, "连接网络");
    lv_label_set_long_mode(ui->scrSetup_btnSSIDConnect_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scrSetup_btnSSIDConnect_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scrSetup_btnSSIDConnect, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scrSetup_btnSSIDConnect_label, LV_PCT(100));

    //Write style for scrSetup_btnSSIDConnect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup_btnSSIDConnect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_btnSSIDConnect, lv_color_hex(0x861078), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_btnSSIDConnect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrSetup_btnSSIDConnect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_btnSSIDConnect, 19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_btnSSIDConnect, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scrSetup_btnSSIDConnect, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scrSetup_btnSSIDConnect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scrSetup_btnSSIDConnect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scrSetup_btnSSIDConnect, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scrSetup_btnSSIDConnect, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_btnSSIDConnect, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_btnSSIDConnect, &lv_font_fusionpixelzhhans_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_btnSSIDConnect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_btnSSIDConnect, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_labelSystemStatus
    ui->scrSetup_labelSystemStatus = lv_label_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_labelSystemStatus, 90, 166);
    lv_obj_set_size(ui->scrSetup_labelSystemStatus, 260, 145);
    lv_label_set_text(ui->scrSetup_labelSystemStatus, "====网络信息====\nIPv4:\nIPv6:\nSSID:\n====负载信息====\nTemp:\nCPU:\nMem:");
    lv_label_set_long_mode(ui->scrSetup_labelSystemStatus, LV_LABEL_LONG_WRAP);

    //Write style for scrSetup_labelSystemStatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_labelSystemStatus, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_labelSystemStatus, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_labelSystemStatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_labelSystemStatus, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_labelSystemStatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scrSetup_taSSID
    ui->scrSetup_taSSID = lv_textarea_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_taSSID, 87, 357);
    lv_obj_set_size(ui->scrSetup_taSSID, 237, 42);
    lv_textarea_set_text(ui->scrSetup_taSSID, "3SE-305-5G");
    lv_textarea_set_placeholder_text(ui->scrSetup_taSSID, "");
    lv_textarea_set_password_bullet(ui->scrSetup_taSSID, "*");
    lv_textarea_set_password_mode(ui->scrSetup_taSSID, false);
    lv_textarea_set_one_line(ui->scrSetup_taSSID, true);
    lv_textarea_set_accepted_chars(ui->scrSetup_taSSID, "");
    lv_textarea_set_max_length(ui->scrSetup_taSSID, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scrSetup_taSSID, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scrSetup_taSSID, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scrSetup_taSSID, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_taSSID, &lv_font_fusionpixelzhhans_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_taSSID, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrSetup_taSSID, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_taSSID, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrSetup_taSSID, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_taSSID, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_taSSID, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scrSetup_taSSID, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scrSetup_taSSID, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scrSetup_taSSID, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scrSetup_taSSID, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_taSSID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scrSetup_taSSID, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scrSetup_taSSID, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scrSetup_taSSID, &lv_font_fusionpixelzhhans_33, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scrSetup_taSSID, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scrSetup_taSSID, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scrSetup_taSSID, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_taSSID, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scrSetup_taSSID, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scrSetup_taSSID, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scrSetup_taSSID, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scrSetup_taSSID, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scrSetup_taSSID, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scrSetup_taSSID, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scrSetup_taSSID, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scrSetup_taSSID, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scrSetup_taSSID, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scrSetup_taSSID, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_taSSID, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scrSetup_labelSSIDPrompt
    ui->scrSetup_labelSSIDPrompt = lv_label_create(ui->scrSetup);
    lv_obj_set_pos(ui->scrSetup_labelSSIDPrompt, 90, 330);
    lv_obj_set_size(ui->scrSetup_labelSSIDPrompt, 166, 24);
    lv_label_set_text(ui->scrSetup_labelSSIDPrompt, "SSID [nmcli con up]");
    lv_label_set_long_mode(ui->scrSetup_labelSSIDPrompt, LV_LABEL_LONG_WRAP);

    //Write style for scrSetup_labelSSIDPrompt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scrSetup_labelSSIDPrompt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scrSetup_labelSSIDPrompt, &lv_font_fusionpixelzhhans_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scrSetup_labelSSIDPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scrSetup_labelSSIDPrompt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scrSetup_labelSSIDPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scrSetup.
    lv_obj_add_event_cb(ui->scrSetup_btnSSIDConnect, scrSetup_btnSSIDConnect_event_handler, LV_EVENT_ALL, ui);

    //Update current screen layout.
    lv_obj_update_layout(ui->scrSetup);

    //Init events for screen.
    events_init_scrSetup(ui);
}
