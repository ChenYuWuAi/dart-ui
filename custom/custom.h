/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

extern int param_edit_is_param;

void custom_init(lv_ui *ui);

void slider_adjust_img_cb(lv_obj_t * img, int32_t brightValue, int16_t hueValue);

void loader_anim_cb(lv_obj_t* var, uint32_t value);

void loader_anim_complete_cb(lv_obj_t* var);

// 元件寿命统计相关函数
void scrStatistic_btnLifeSpanClear_event_handler(lv_event_t *e);
void scrStatistic_ddlistLifeSpanSelect_event_handler(lv_event_t *e);

// WIFI Connect
void scrSetup_btnSSIDConnect_event_handler(lv_event_t *e);

void connect_to_wifi(const char *ssid);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
