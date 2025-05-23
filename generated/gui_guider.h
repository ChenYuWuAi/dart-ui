/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


typedef struct
{
  
	lv_obj_t *scrHome;
	bool scrHome_del;
	lv_obj_t *scrHome_contBG;
	lv_obj_t *scrHome_contText;
	lv_obj_t *scrHome_labelPrompt;
	lv_obj_t *scrHome_contTop;
	lv_obj_t *scrHome_imgRoboMaster;
	lv_obj_t *scrHome_imgIconWIFI;
	lv_obj_t *scrHome_labelDate;
	lv_obj_t *scrHome_labelMCUMode;
	lv_obj_t *scrHome_img_1;
	lv_obj_t *scrHome_contMain;
	lv_obj_t *scrHome_contCopy;
	lv_obj_t *scrHome_imgIconCopy;
	lv_obj_t *scrHome_labelCopy;
	lv_obj_t *scrHome_contScan;
	lv_obj_t *scrHome_imgIconScan;
	lv_obj_t *scrHome_labelScan;
	lv_obj_t *scrHome_contPrint;
	lv_obj_t *scrHome_imgIconPrint;
	lv_obj_t *scrHome_labelPrint;
	lv_obj_t *scrHome_contSetup;
	lv_obj_t *scrHome_imgIconSetup;
	lv_obj_t *scrHome_labelSetup;
	lv_obj_t *scrHome_imgAnim;
	lv_obj_t *scrVision;
	bool scrVision_del;
	lv_obj_t *scrVision_contBG;
	lv_obj_t *scrVision_labelTitle;
	lv_obj_t *scrVision_btnBack;
	lv_obj_t *scrVision_btnBack_label;
	lv_obj_t *scrVision_contPanel;
	lv_obj_t *scrVision_imgBright;
	lv_obj_t *scrVision_imgColor;
	lv_obj_t *scrVision_sliderBright;
	lv_obj_t *scrVision_sliderHue;
	lv_obj_t *scrVision_btnNext;
	lv_obj_t *scrVision_btnNext_label;
	lv_obj_t *scrVision_contImage;
	lv_obj_t *scrVision_imgScanned;
	lv_obj_t *scrVision_btnRestart;
	lv_obj_t *scrVision_btnRestart_label;
	lv_obj_t *scrParamsEdit;
	bool scrParamsEdit_del;
	lv_obj_t *scrParamsEdit_contBG;
	lv_obj_t *scrParamsEdit_labelTitle;
	lv_obj_t *scrParamsEdit_btnBack;
	lv_obj_t *scrParamsEdit_btnBack_label;
	lv_obj_t *scrParamsEdit_contPanel;
	lv_obj_t *scrParamsEdit_labelParamName;
	lv_obj_t *scrParamsEdit_btnMinus;
	lv_obj_t *scrParamsEdit_btnMinus_label;
	lv_obj_t *scrParamsEdit_btnPlus;
	lv_obj_t *scrParamsEdit_btnPlus_label;
	lv_obj_t *scrParamsEdit_taParamValue;
	lv_obj_t *scrParamsEdit_imgbtnResetThis;
	lv_obj_t *scrParamsEdit_imgbtnResetThis_label;
	lv_obj_t *scrParamsEdit_cbUpdateThis;
	lv_obj_t *scrParamsEdit_btnNext;
	lv_obj_t *scrParamsEdit_btnNext_label;
	lv_obj_t *scrParamsEdit_listFiles;
	lv_obj_t *scrParamsEdit_listFiles_item0;
	lv_obj_t *scrParamsEdit_listFiles_item1;
	lv_obj_t *scrParamsEdit_contDDLpanel;
	lv_obj_t *scrParamsEdit_btnSelectAll;
	lv_obj_t *scrParamsEdit_btnSelectAll_label;
	lv_obj_t *scrParamsEdit_btnResetAll;
	lv_obj_t *scrParamsEdit_btnResetAll_label;
	lv_obj_t *scrSetup;
	bool scrSetup_del;
	lv_obj_t *scrSetup_contBG;
	lv_obj_t *scrSetup_btnBack;
	lv_obj_t *scrSetup_btnBack_label;
	lv_obj_t *scrSetup_labelPrompt;
	lv_obj_t *scrSetup_imgPrinter;
	lv_obj_t *scrSetup_imgWave;
	lv_obj_t *scrSetup_imgCloud;
	lv_obj_t *scrLoader;
	bool scrLoader_del;
	lv_obj_t *scrLoader_contBG;
	lv_obj_t *scrLoader_labelLoadStage;
	lv_obj_t *scrLoader_arcLoader;
	lv_obj_t *scrLoader_labelLoader;
	lv_obj_t *scrLoader_labelPrompt;
	lv_obj_t *scrFinished;
	bool scrFinished_del;
	lv_obj_t *scrFinished_contBG;
	lv_obj_t *scrFinished_imgIconOk;
	lv_obj_t *scrFinished_btnNxet;
	lv_obj_t *scrFinished_btnNxet_label;
	lv_obj_t *scrFinished_labelPrompt;
	lv_obj_t *scrParams;
	bool scrParams_del;
	lv_obj_t *scrParams_contBG;
	lv_obj_t *scrParams_imgbtnEdit;
	lv_obj_t *scrParams_imgbtnEdit_label;
	lv_obj_t *scrParams_imgbtnExport;
	lv_obj_t *scrParams_imgbtnExport_label;
	lv_obj_t *scrParams_labelTitle;
	lv_obj_t *scrParams_btnBack;
	lv_obj_t *scrParams_btnBack_label;
	lv_obj_t *scrParams_tabviewParamsSelect;
	lv_obj_t *scrParams_tabviewParamsSelect_tab_1;
	lv_obj_t *scrParams_tabviewParamsSelect_tab_2;
	lv_obj_t *scrParams_contDartStatus;
	lv_obj_t *scrParams_label_1;
	lv_obj_t *scrParams_tableDartStatus;
	lv_obj_t *scrParams_contPanel;
	lv_obj_t *scrParams_tableDartParams;
	lv_obj_t *scrParams_label_2;
	lv_obj_t *scrQRCode;
	bool scrQRCode_del;
	lv_obj_t *scrQRCode_contBG;
	lv_obj_t *scrQRCode_labelTitle;
	lv_obj_t *scrQRCode_btnBack;
	lv_obj_t *scrQRCode_btnBack_label;
	lv_obj_t *scrQRCode_tabviewExportSelect;
	lv_obj_t *scrQRCode_tabviewExportSelect_tab_1;
	lv_obj_t *scrQRCode_tabviewExportSelect_tab_2;
	lv_obj_t *scrQRCode_qrcodeExport;
	lv_obj_t *scrQRCode_labelHintExport;
	lv_obj_t *scrQRCode_imgIKUYO;
	lv_obj_t *g_kb_top_layer;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_bottom_layer(void);

void setup_ui(lv_ui *ui);

void video_play(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_scrHome(lv_ui *ui);
void setup_scr_scrVision(lv_ui *ui);
void setup_scr_scrParamsEdit(lv_ui *ui);
void setup_scr_scrSetup(lv_ui *ui);
void setup_scr_scrLoader(lv_ui *ui);
void setup_scr_scrFinished(lv_ui *ui);
void setup_scr_scrParams(lv_ui *ui);
void setup_scr_scrQRCode(lv_ui *ui);
LV_IMAGE_DECLARE(_single_r_RGB565A8_42x34);
LV_IMAGE_DECLARE(_wifi_off_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40);
LV_IMAGE_DECLARE(_wifi_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40);

LV_IMAGE_DECLARE(_btn_bg_1_RGB565A8_166x211);
LV_IMAGE_DECLARE(_rocket_launch_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);

LV_IMAGE_DECLARE(_btn_bg_2_RGB565A8_166x211);
LV_IMAGE_DECLARE(_eye_tracking_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);

LV_IMAGE_DECLARE(_btn_bg_3_RGB565A8_166x211);
LV_IMAGE_DECLARE(_monitoring_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);

LV_IMAGE_DECLARE(_btn_bg_4_RGB565A8_166x211);
LV_IMAGE_DECLARE(_settings_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_64x64);
LV_IMAGE_DECLARE(_8935DE8FFEC3E00FAE4951382D01C143_RGB565A8_100x100);
LV_IMAGE_DECLARE(_bright_RGB565A8_33x33);
LV_IMAGE_DECLARE(_hue_RGB565A8_30x30);
LV_IMAGE_DECLARE(_example_RGB565A8_426x341);
LV_IMAGE_DECLARE(_restart_alt_24dp_1F1F1F_FILL0_wght400_GRAD0_opsz24_RGB565A8_50x50);
LV_IMAGE_DECLARE(_restart_alt_24dp_BB271A_FILL0_wght400_GRAD0_opsz24_RGB565A8_50x50);
LV_IMAGE_DECLARE(_printer2_RGB565A8_116x120);
LV_IMAGE_DECLARE(_no_internet_RGB565A8_41x40);
LV_IMAGE_DECLARE(_cloud_RGB565A8_100x70);
LV_IMAGE_DECLARE(_ready_RGB565A8_166x166);
LV_IMAGE_DECLARE(_edit_96dp_FFFFFF_FILL0_wght400_GRAD0_opsz48_RGB565A8_40x40);
LV_IMAGE_DECLARE(_edit_24dp_904E29_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40);
LV_IMAGE_DECLARE(_upload_24dp_F3F3F3_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40);
LV_IMAGE_DECLARE(_upload_24dp_904E29_FILL0_wght400_GRAD0_opsz24_RGB565A8_40x40);
LV_IMAGE_DECLARE(_Camera_XHS_17465037706701040g2sg31fcdj4a2medg5oo7_RGB565A8_239x235);

LV_FONT_DECLARE(lv_font_fusionpixelzhhans_26)
LV_FONT_DECLARE(lv_font_fusionpixellatin_26)
LV_FONT_DECLARE(lv_font_fusionpixelzhhans_33)
LV_FONT_DECLARE(lv_font_fusionpixelzhhans_41)
LV_FONT_DECLARE(lv_font_fusionpixelzhhans_20)
LV_FONT_DECLARE(lv_font_fusionpixelzhhans_12)
LV_FONT_DECLARE(lv_font_fusionpixelzhhans_23)
LV_FONT_DECLARE(lv_font_fusionpixellatin_23)
LV_FONT_DECLARE(lv_font_fusionpixellatin_18)
LV_FONT_DECLARE(lv_font_fusionpixellatin_20)
LV_FONT_DECLARE(lv_font_fusionpixellatin_33)
LV_FONT_DECLARE(lv_font_fusionpixelzhhans_16)
LV_FONT_DECLARE(lv_font_montserratMedium_18)


#ifdef __cplusplus
}
#endif
#endif
