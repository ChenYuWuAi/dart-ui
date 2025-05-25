/*
 * Copyright 2024 NXP
 * NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
}

void slider_adjust_img_cb(lv_obj_t *img, int32_t brightValue, int16_t hueValue)
{
    static lv_color_t recolor;

    recolor = lv_color_hsv_to_rgb(hueValue, 100, brightValue);

    lv_obj_set_style_img_recolor(img, recolor, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(img, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void loader_anim_cb(lv_obj_t *var, uint32_t value)
{
    lv_arc_set_value(var, value);
    lv_label_set_text_fmt(guider_ui.scrLoader_labelLoader, "%d%%", value);
}

void loader_anim_complete_cb(lv_obj_t *var)
{
    ui_load_scr_animation(&guider_ui, &guider_ui.scrFinished, guider_ui.scrFinished_del, &guider_ui.scrLoader_del, setup_scr_scrFinished, LV_SCR_LOAD_ANIM_FADE_ON, 200, 100, false, true);
}

// 全局变量用来存储当前选中的元件
static char selected_component[32] = "total"; // 默认为总发射次数

// 元件寿命计数器清零按钮处理函数
void scrStatistic_btnLifeSpanClear_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code)
    {
    case LV_EVENT_CLICKED:
    {
        extern bool reset_component_life_count_from_ui(const char *component_name);
        reset_component_life_count_from_ui(selected_component);
        break;
    }
    default:
        break;
    }
}

// 元件选择下拉菜单处理函数
void scrStatistic_ddlistLifeSpanSelect_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);

    if (code == LV_EVENT_VALUE_CHANGED)
    {
        char buf[32];
        lv_dropdown_get_selected_str(obj, buf, sizeof(buf));

        // 更新选中的元件名称
        if (strcmp(buf, "总发射次数") == 0)
            strcpy(selected_component, "total");
        else if (strcmp(buf, "滑台") == 0)
            strcpy(selected_component, "slider");
        else if (strcmp(buf, "扳机") == 0)
            strcpy(selected_component, "trigger");
        else if (strcmp(buf, "缓冲打印件") == 0)
            strcpy(selected_component, "buffer");
        else if (strcmp(buf, "下滑块") == 0)
            strcpy(selected_component, "bottom");
        else if (strcmp(buf, "皮筋") == 0)
            strcpy(selected_component, "rubber");
    }
}

// WIFI Connect
void scrSetup_btnSSIDConnect_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED)
    {
        connect_to_wifi(lv_textarea_get_text(guider_ui.scrSetup_taSSID));
    }
}