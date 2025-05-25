/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

static bool isBackHome = false;
static bool isSetup = false;
static bool isParams = false;
static bool isVision = true;
static bool isStatistic = false;
#define TRANS_SCALE_SMALL 240
static int camera_count = 0;
void change_digit_at_cursor(lv_obj_t * ta, int delta) {
    char buf[128];
    const char * text = lv_textarea_get_text(ta);
    strncpy(buf, text, sizeof(buf));
    buf[sizeof(buf)-1] = '\0';

    uint32_t pos = lv_textarea_get_cursor_pos(ta);
    uint32_t len = strlen(buf);
    if (pos == 0 || pos > len) return;

    // 1. 找到包含光标的数字串（支持负号、小数点）
    int start = pos - 1;
    int end = pos - 1;

    while (start > 0 && (isdigit(buf[start - 1]) || buf[start - 1] == '.' || buf[start - 1] == '-')) {
        // 只允许负号在开头
        if (buf[start - 1] == '-' && (start - 1 != 0)) break;
        start--;
    }

    while (end + 1 < len && (isdigit(buf[end + 1]) || buf[end + 1] == '.')) {
        end++;
    }

    char num_part[64];
    int num_len = end - start + 1;
    strncpy(num_part, buf + start, num_len);
    num_part[num_len] = '\0';

    int cursor_in_num = pos - start;
    char *dot = strchr(num_part, '.');
    int dot_index = dot ? (int)(dot - num_part) : -1;

    // 2. 判断光标在整数 or 小数
    if (dot && cursor_in_num > dot_index) {
        // 小数部分
        for (int i = cursor_in_num; i < num_len; i++) {
            if (isdigit(num_part[i])) {
                int digit = num_part[i] - '0';
                digit = (digit + delta + 10) % 10;
                num_part[i] = '0' + digit;

                char new_buf[128];
                snprintf(new_buf, sizeof(new_buf), "%.*s%s%s",
                         start, buf, num_part, buf + end + 1);
                lv_textarea_set_text(ta, new_buf);
                lv_textarea_set_cursor_pos(ta, pos);
                return;
            }
        }
    } else {
        // 整数部分（可能含负号）
        int digit_index = -1;
        int digit_count = (dot_index == -1) ? strlen(num_part) : dot_index;
        int magnitude = 0;

        for (int i = cursor_in_num - 1; i >= 0; i--) {
            if (isdigit(num_part[i])) {
                digit_index = i;
                magnitude = 1;
                for (int j = digit_index + 1; j < digit_count; j++) {
                    if (isdigit(num_part[j])) magnitude *= 10;
                }
                break;
            }
        }

        if (digit_index >= 0 && magnitude > 0) {
            long long value = atoll(num_part);
            int sign = (value < 0) ? -1 : 1;

            long long updated = value + (long long)delta * magnitude;

            // 特殊规则：如果是 0 -> -1 操作（即逐步减少）
            if (value == 0 && delta < 0) {
                updated = -magnitude;
            }

            snprintf(num_part, sizeof(num_part), "%lld", updated);
            char new_buf[128];
            snprintf(new_buf, sizeof(new_buf), "%.*s%s%s",
                     start, buf, num_part, buf + end + 1);
            lv_textarea_set_text(ta, new_buf);
            lv_textarea_set_cursor_pos(ta, pos);  // 恢复光标
        }
    }
}

int param_edit_is_param = 0;

static void scrHome_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrHome_contMain, 300, 0, lv_obj_get_y(guider_ui.scrHome_contMain), 94, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrHome_contTop, 300, 0, lv_obj_get_y(guider_ui.scrHome_contTop), 18, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrHome_contText, 300, 0, lv_obj_get_y(guider_ui.scrHome_contText), 357, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrHome_contBG, 400, 0, lv_obj_get_height(guider_ui.scrHome_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        lv_obj_fade_in(guider_ui.scrHome_contCopy, 400, 100);
        lv_obj_fade_in(guider_ui.scrHome_contScan, 400, 100);
        lv_obj_fade_in(guider_ui.scrHome_contPrint, 400, 100);
        lv_obj_fade_in(guider_ui.scrHome_contSetup, 400, 100);
        ui_animation(guider_ui.scrHome_imgAnim, 400, 0, lv_obj_get_y(guider_ui.scrHome_imgAnim), 350, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrHome_contMain, 300, 0, lv_obj_get_y(guider_ui.scrHome_contMain), 105, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrHome_contTop, 300, 0, lv_obj_get_y(guider_ui.scrHome_contTop), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrHome_contText, 300, 0, lv_obj_get_y(guider_ui.scrHome_contText), 385, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrHome_imgAnim, 300, 0, lv_obj_get_y(guider_ui.scrHome_imgAnim), 380, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        if (isSetup) {
            ui_animation(guider_ui.scrHome_contBG, 300, 0, lv_obj_get_height(guider_ui.scrHome_contBG), 480, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
            lv_obj_set_style_bg_color(guider_ui.scrHome_contBG, lv_color_hex(0xe12e2e), LV_PART_MAIN);
        } else {
            ui_animation(guider_ui.scrHome_contBG, 300, 0, lv_obj_get_height(guider_ui.scrHome_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        }
        break;
    }
    default:
        break;
    }
}

static void scrHome_contCopy_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contCopy, TRANS_SCALE_SMALL, 0);
        break;
    }
    case LV_EVENT_RELEASED:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contCopy, 256, 0);
        isParams = true;
        isSetup = false;
        isVision = false;
        isStatistic = false;
        ui_load_scr_animation(&guider_ui, &guider_ui.scrParams, guider_ui.scrParams_del, &guider_ui.scrHome_del, setup_scr_scrParams, LV_SCR_LOAD_ANIM_FADE_ON, 300, 100, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrHome_contScan_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSING:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contScan, TRANS_SCALE_SMALL, 0);
        break;
    }
    case LV_EVENT_RELEASED:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contScan, LV_SCALE_NONE, 0);
        isParams = false;
        isVision = true;
        isStatistic = false;
        isSetup = false;
        ui_load_scr_animation(&guider_ui, &guider_ui.scrVision, guider_ui.scrVision_del, &guider_ui.scrHome_del, setup_scr_scrVision, LV_SCR_LOAD_ANIM_FADE_ON, 300, 100, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrHome_contPrint_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSING:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contPrint, TRANS_SCALE_SMALL, 0);
        break;
    }
    case LV_EVENT_RELEASED:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contPrint, LV_SCALE_NONE, 0);
        isSetup = false;
        isParams = false;
        isVision = false;
        isStatistic = true;
        ui_load_scr_animation(&guider_ui, &guider_ui.scrStatistic, guider_ui.scrStatistic_del, &guider_ui.scrHome_del, setup_scr_scrStatistic, LV_SCR_LOAD_ANIM_FADE_ON, 300, 100, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrHome_contSetup_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSING:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contSetup, TRANS_SCALE_SMALL, 0);
        break;
    }
    case LV_EVENT_RELEASED:
    {
        lv_obj_set_style_transform_scale(guider_ui.scrHome_contSetup, LV_SCALE_NONE, 0);
        isSetup = true;
        isParams = false;
        isVision = true;
        isStatistic = false;
        ui_load_scr_animation(&guider_ui, &guider_ui.scrSetup, guider_ui.scrSetup_del, &guider_ui.scrHome_del, setup_scr_scrSetup, LV_SCR_LOAD_ANIM_FADE_ON, 300, 100, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrHome (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrHome, scrHome_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrHome_contCopy, scrHome_contCopy_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrHome_contScan, scrHome_contScan_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrHome_contPrint, scrHome_contPrint_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrHome_contSetup, scrHome_contSetup_event_handler, LV_EVENT_ALL, ui);
}

static void scrVision_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrVision_contBG, 400, 0, lv_obj_get_height(guider_ui.scrVision_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_labelTitle, 300, 0, lv_obj_get_y(guider_ui.scrVision_labelTitle), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        lv_label_set_text(guider_ui.scrVision_labelTitle, "制导相机画面");
        ui_animation(guider_ui.scrVision_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrVision_btnBack), 32, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_contPanel, 300, 0, lv_obj_get_y(guider_ui.scrVision_contPanel), 45, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_contImage, 300, 0, lv_obj_get_y(guider_ui.scrVision_contImage), 94, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        camera_count = 0;
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrVision_contBG, 300, 0, lv_obj_get_height(guider_ui.scrVision_contBG), 480, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrVision_btnBack), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_labelTitle, 300, 0, lv_obj_get_y(guider_ui.scrVision_labelTitle), 17, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_btnNext, 300, 0, lv_obj_get_y(guider_ui.scrVision_btnNext), 385, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrVision_contPanel, 300, 0, lv_obj_get_y(guider_ui.scrVision_contPanel), 73, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        if (isBackHome) {
            ui_animation(guider_ui.scrVision_contBG, 300, 0, lv_obj_get_height(guider_ui.scrVision_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
            ui_animation(guider_ui.scrVision_contImage, 300, 0, lv_obj_get_y(guider_ui.scrVision_contImage), 73, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        }
        break;
    }
    default:
        break;
    }
}

static void scrVision_btnBack_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrHome, guider_ui.scrHome_del, &guider_ui.scrVision_del, setup_scr_scrHome, LV_SCR_LOAD_ANIM_FADE_ON, 300, 100, false, true);
        isBackHome = true;
        break;
    }
    default:
        break;
    }
}

static void scrVision_btnNext_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        isBackHome = false;
        camera_count += 1;
        camera_count %= 2;
        if (camera_count == 0) {
            lv_label_set_text(guider_ui.scrVision_labelTitle, "制导相机画面");
        } else {
            lv_label_set_text(guider_ui.scrVision_labelTitle, "参数相机画面");
        }
        break;
    }
    default:
        break;
    }
}

void events_init_scrVision (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrVision, scrVision_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrVision_btnBack, scrVision_btnBack_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrVision_btnNext, scrVision_btnNext_event_handler, LV_EVENT_ALL, ui);
}

static void scrParamsEdit_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrParamsEdit_contDDLpanel, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_contDDLpanel), 382, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_btnNext, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_btnNext), 385, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_contPanel, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_contPanel), 94, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_btnBack), 18, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_labelTitle, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_labelTitle), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_contBG, 400, 0, lv_obj_get_height(guider_ui.scrParamsEdit_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_listFiles, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_listFiles), 94, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);

        if (param_edit_is_param == 0) {
            lv_label_set_text(guider_ui.scrParamsEdit_labelTitle, "参数编辑");
        } else if (param_edit_is_param == 1) {
            lv_label_set_text(guider_ui.scrParamsEdit_labelTitle, "协议编辑");
        }
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrParamsEdit_contDDLpanel, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_contDDLpanel), 362, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_btnNext, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_btnNext), 370, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_contPanel, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_contPanel), 105, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_btnBack), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_labelTitle, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_labelTitle), 17, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_contBG, 300, 0, lv_obj_get_height(guider_ui.scrParamsEdit_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParamsEdit_listFiles, 300, 0, lv_obj_get_y(guider_ui.scrParamsEdit_listFiles), 105, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

static void scrParamsEdit_btnBack_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrParams, guider_ui.scrParams_del, &guider_ui.scrParamsEdit_del, setup_scr_scrParams, LV_SCR_LOAD_ANIM_FADE_ON, 200, 100, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrParamsEdit_btnMinus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        change_digit_at_cursor(guider_ui.scrParamsEdit_taParamValue, -1);
        break;
    }
    case LV_EVENT_LONG_PRESSED_REPEAT:
    {
        change_digit_at_cursor(guider_ui.scrParamsEdit_taParamValue, -1);
        break;
    }
    default:
        break;
    }
}

static void scrParamsEdit_btnPlus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        change_digit_at_cursor(guider_ui.scrParamsEdit_taParamValue, 1);
        break;
    }
    case LV_EVENT_LONG_PRESSED_REPEAT:
    {
        change_digit_at_cursor(guider_ui.scrParamsEdit_taParamValue, 1);
        break;
    }
    default:
        break;
    }
}

static void scrParamsEdit_btnNext_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrFinished, guider_ui.scrFinished_del, &guider_ui.scrParamsEdit_del, setup_scr_scrFinished, LV_SCR_LOAD_ANIM_FADE_ON, 200, 100, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrParamsEdit (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrParamsEdit, scrParamsEdit_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParamsEdit_btnBack, scrParamsEdit_btnBack_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParamsEdit_btnMinus, scrParamsEdit_btnMinus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParamsEdit_btnPlus, scrParamsEdit_btnPlus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParamsEdit_btnNext, scrParamsEdit_btnNext_event_handler, LV_EVENT_ALL, ui);
}

static void scrSetup_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrSetup_labelPrompt, 300, 0, lv_obj_get_y(guider_ui.scrSetup_labelPrompt), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrSetup_contBG, 400, 0, lv_obj_get_height(guider_ui.scrSetup_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrSetup_btnBack, 400, 0, lv_obj_get_y(guider_ui.scrSetup_btnBack), 31, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrSetup_labelPrompt, 400, 0, lv_obj_get_y(guider_ui.scrSetup_labelPrompt), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrSetup_contBG, 300, 0, lv_obj_get_height(guider_ui.scrSetup_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        lv_obj_set_style_bg_color(guider_ui.scrSetup_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN);
        ui_animation(guider_ui.scrSetup_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrSetup_btnBack), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

static void scrSetup_btnBack_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrHome, guider_ui.scrHome_del, &guider_ui.scrSetup_del, setup_scr_scrHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        isBackHome = true;
        break;
    }
    default:
        break;
    }
}

void events_init_scrSetup (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrSetup, scrSetup_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrSetup_btnBack, scrSetup_btnBack_event_handler, LV_EVENT_ALL, ui);
}

static void scrLoader_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrLoader_labelPrompt, 300, 0, lv_obj_get_y(guider_ui.scrLoader_labelPrompt), 340, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrLoader_labelLoader, 300, 0, lv_obj_get_y(guider_ui.scrLoader_labelLoader), 155, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrLoader_arcLoader, 300, 0, lv_obj_get_y(guider_ui.scrLoader_arcLoader), 70, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);

        ui_animation(guider_ui.scrLoader_labelLoadStage, 400, 0, lv_obj_get_y(guider_ui.scrLoader_labelLoadStage), 384, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrLoader_labelPrompt, 300, 0, lv_obj_get_y(guider_ui.scrLoader_labelPrompt), 360, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrLoader_labelLoader, 400, 0, lv_obj_get_y(guider_ui.scrLoader_labelLoader), 175, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrLoader_arcLoader, 300, 0, lv_obj_get_y(guider_ui.scrLoader_arcLoader), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrLoader_labelLoadStage, 300, 0, lv_obj_get_y(guider_ui.scrLoader_labelLoadStage), 404, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

void events_init_scrLoader (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrLoader, scrLoader_event_handler, LV_EVENT_ALL, ui);
}

static void scrFinished_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrFinished_labelPrompt, 300, 0, lv_obj_get_y(guider_ui.scrFinished_labelPrompt), 300, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrFinished_btnNxet, 300, 0, lv_obj_get_y(guider_ui.scrFinished_btnNxet), 370, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrFinished_imgIconOk, 300, 0, lv_obj_get_y(guider_ui.scrFinished_imgIconOk), 55, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrFinished_labelPrompt, 400, 0, lv_obj_get_y(guider_ui.scrFinished_labelPrompt), 320, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrFinished_btnNxet, 300, 0, lv_obj_get_y(guider_ui.scrFinished_btnNxet), 390, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrFinished_imgIconOk, 300, 0, lv_obj_get_y(guider_ui.scrFinished_imgIconOk), 75, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrFinished_contBG, 300, 0, lv_obj_get_height(guider_ui.scrFinished_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

static void scrFinished_btnNxet_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrHome, guider_ui.scrHome_del, &guider_ui.scrFinished_del, setup_scr_scrHome, LV_SCR_LOAD_ANIM_FADE_ON, 200, 100, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrFinished (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrFinished, scrFinished_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrFinished_btnNxet, scrFinished_btnNxet_event_handler, LV_EVENT_ALL, ui);
}

static void scrParams_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrParams_contBG, 400, 0, lv_obj_get_height(guider_ui.scrParams_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_btnBack, 400, 0, lv_obj_get_y(guider_ui.scrParams_btnBack), 32, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_labelTitle, 400, 0, lv_obj_get_y(guider_ui.scrParams_labelTitle), 35, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_imgbtnExport, 400, 0, lv_obj_get_y(guider_ui.scrParams_imgbtnExport), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_tabviewParamsSelect, 400, 0, lv_obj_get_y(guider_ui.scrParams_tabviewParamsSelect), 25, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_contDartStatus, 400, 0, lv_obj_get_y(guider_ui.scrParams_contDartStatus), 113, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_contPanel, 400, 0, lv_obj_get_y(guider_ui.scrParams_contPanel), 113, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        if(param_edit_is_param == 0) {
            lv_tabview_set_act(guider_ui.scrParams_tabviewParamsSelect, 0, false);
            lv_label_set_text(guider_ui.scrParams_label_2, "打击参数");
        }
        else if(param_edit_is_param == 1) {
            lv_tabview_set_act(guider_ui.scrParams_tabviewParamsSelect, 1, false);
            lv_label_set_text(guider_ui.scrParams_label_2, "打击协议");
        }
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrParams_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrParams_btnBack), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_labelTitle, 300, 0, lv_obj_get_y(guider_ui.scrParams_labelTitle), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_imgbtnExport, 300, 0, lv_obj_get_y(guider_ui.scrParams_imgbtnExport), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_tabviewParamsSelect, 300, 0, lv_obj_get_y(guider_ui.scrParams_tabviewParamsSelect), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_contDartStatus, 300, 0, lv_obj_get_y(guider_ui.scrParams_contDartStatus), 156, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrParams_contPanel, 300, 0, lv_obj_get_y(guider_ui.scrParams_contPanel), 156, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        if(lv_tabview_get_tab_act(guider_ui.scrParams_tabviewParamsSelect) == 0)
            param_edit_is_param = 0;
        else
            param_edit_is_param = 1;
        if (isBackHome) {
            ui_animation(guider_ui.scrParams_contBG, 300, 0, lv_obj_get_height(guider_ui.scrParams_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        } else {
            ui_animation(guider_ui.scrParams_contBG, 300, 0, lv_obj_get_height(guider_ui.scrParams_contBG), 480, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        }
        break;
    }
    default:
        break;
    }
}

static void scrParams_imgbtnExport_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrQRCode, guider_ui.scrQRCode_del, &guider_ui.scrParams_del, setup_scr_scrQRCode, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrParams_btnBack_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrHome, guider_ui.scrHome_del, &guider_ui.scrParams_del, setup_scr_scrHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        isBackHome = true;
        break;
    }
    default:
        break;
    }
}

static void scrParams_tabviewParamsSelect_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        if(lv_tabview_get_tab_act(guider_ui.scrParams_tabviewParamsSelect) == 0)
        {
            param_edit_is_param = 0;
            lv_label_set_text(guider_ui.scrParams_label_2, "打击参数");
        }
        else {
            param_edit_is_param = 1;
            lv_label_set_text(guider_ui.scrParams_label_2, "打击协议");
        }
        break;
    }
    default:
        break;
    }
}

void events_init_scrParams (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrParams, scrParams_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParams_imgbtnExport, scrParams_imgbtnExport_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParams_btnBack, scrParams_btnBack_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrParams_tabviewParamsSelect, scrParams_tabviewParamsSelect_event_handler, LV_EVENT_ALL, ui);
}

static void scrQRCode_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrQRCode_imgIKUYO, 400, 0, lv_obj_get_y(guider_ui.scrQRCode_imgIKUYO), 117, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_qrcodeExport, 400, 0, lv_obj_get_y(guider_ui.scrQRCode_qrcodeExport), 95, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_tabviewExportSelect, 400, 0, lv_obj_get_y(guider_ui.scrQRCode_tabviewExportSelect), 25, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_btnBack, 400, 0, lv_obj_get_y(guider_ui.scrQRCode_btnBack), 32, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_labelTitle, 400, 0, lv_obj_get_y(guider_ui.scrQRCode_labelTitle), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_contBG, 400, 0, lv_obj_get_height(guider_ui.scrQRCode_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_labelHintExport, 400, 0, lv_obj_get_y(guider_ui.scrQRCode_labelHintExport), 371, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        if(param_edit_is_param == 0)
            lv_tabview_set_act(guider_ui.scrQRCode_tabviewExportSelect, 0, false);
        else if(param_edit_is_param == 1)
            lv_tabview_set_act(guider_ui.scrQRCode_tabviewExportSelect, 1, false);
        break;
    }
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrQRCode_imgIKUYO, 300, 0, lv_obj_get_y(guider_ui.scrQRCode_imgIKUYO), 137, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_labelHintExport, 300, 0, lv_obj_get_y(guider_ui.scrQRCode_labelHintExport), 391, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_qrcodeExport, 300, 0, lv_obj_get_y(guider_ui.scrQRCode_qrcodeExport), 113, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_tabviewExportSelect, 300, 0, lv_obj_get_y(guider_ui.scrQRCode_tabviewExportSelect), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrQRCode_btnBack), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_labelTitle, 300, 0, lv_obj_get_y(guider_ui.scrQRCode_labelTitle), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrQRCode_contBG, 300, 0, lv_obj_get_height(guider_ui.scrQRCode_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        if(lv_tabview_get_tab_act(guider_ui.scrQRCode_tabviewExportSelect) == 0)
            param_edit_is_param = 0;
        else
            param_edit_is_param = 1;
        break;
    }
    default:
        break;
    }
}

static void scrQRCode_btnBack_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrParams, guider_ui.scrParams_del, &guider_ui.scrQRCode_del, setup_scr_scrParams, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scrQRCode_tabviewExportSelect_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        if(lv_tabview_get_tab_act(guider_ui.scrQRCode_tabviewExportSelect) == 0)
            param_edit_is_param = 0;
        else
            param_edit_is_param = 1;
        break;
    }
    default:
        break;
    }
}

void events_init_scrQRCode (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrQRCode, scrQRCode_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrQRCode_btnBack, scrQRCode_btnBack_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrQRCode_tabviewExportSelect, scrQRCode_tabviewExportSelect_event_handler, LV_EVENT_ALL, ui);
}

static void scrStatistic_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_UNLOAD_START:
    {
        ui_animation(guider_ui.scrStatistic_btnBack, 300, 0, lv_obj_get_y(guider_ui.scrStatistic_btnBack), 0, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrStatistic_contDartLaunches, 300, 0, lv_obj_get_y(guider_ui.scrStatistic_contDartLaunches), 50, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrStatistic_contLifeSpan, 300, 0, lv_obj_get_y(guider_ui.scrStatistic_contLifeSpan), 50, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrStatistic_contBG, 300, 0, lv_obj_get_height(guider_ui.scrStatistic_contBG), 88, &lv_anim_path_ease_out, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        break;
    }
    case LV_EVENT_SCREEN_LOAD_START:
    {
        ui_animation(guider_ui.scrStatistic_contDartLaunches, 400, 0, lv_obj_get_y(guider_ui.scrStatistic_contDartLaunches), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrStatistic_contLifeSpan, 400, 0, lv_obj_get_y(guider_ui.scrStatistic_contLifeSpan), 35, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrStatistic_btnBack, 400, 0, lv_obj_get_y(guider_ui.scrStatistic_btnBack), 32, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.scrStatistic_contBG, 400, 0, lv_obj_get_height(guider_ui.scrStatistic_contBG), 140, &lv_anim_path_ease_in, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_height, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

static void scrStatistic_btnBack_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scrHome, guider_ui.scrHome_del, &guider_ui.scrStatistic_del, setup_scr_scrHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scrStatistic (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scrStatistic, scrStatistic_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scrStatistic_btnBack, scrStatistic_btnBack_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
