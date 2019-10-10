/*
 * sec_battery_sysfs.h
 * Samsung Mobile Battery Header
 *
 *
 * Copyright (C) 2018 Samsung Electronics, Inc.
 *
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SEC_BATTERY_SYSFS_H
#define __SEC_BATTERY_SYSFS_H __FILE__

ssize_t sec_bat_show_attrs(struct device *dev,
				struct device_attribute *attr, char *buf);

ssize_t sec_bat_store_attrs(struct device *dev,
				struct device_attribute *attr,
				const char *buf, size_t count);

int sec_bat_create_attrs(struct device *dev);

#define SEC_BATTERY_ATTR(_name)						\
{									\
	.attr = {.name = #_name, .mode = 0664},	\
	.show = sec_bat_show_attrs,					\
	.store = sec_bat_store_attrs,					\
}

enum {
	BATT_RESET_SOC = 0,
	BATT_READ_RAW_SOC,
	BATT_READ_ADJ_SOC,
	BATT_TYPE,
	BATT_VFOCV,
	BATT_VOL_ADC,
	BATT_VOL_ADC_CAL,
	BATT_VOL_AVER,
	BATT_VOL_ADC_AVER,
	BATT_CURRENT_UA_NOW,
	BATT_CURRENT_UA_AVG,
	BATT_FILTER_CFG,
	BATT_TEMP,
	BATT_TEMP_ADC,
	BATT_TEMP_AVER,
	BATT_TEMP_ADC_AVER,
	USB_TEMP,
	USB_TEMP_ADC,
	CHG_TEMP,
	CHG_TEMP_ADC,
	SLAVE_CHG_TEMP,
	SLAVE_CHG_TEMP_ADC,

	BATT_VF_ADC,
	BATT_SLATE_MODE,

	BATT_LP_CHARGING,
	SIOP_ACTIVATED,
	SIOP_LEVEL,
	SIOP_EVENT,
	BATT_CHARGING_SOURCE,
	FG_REG_DUMP,
	FG_RESET_CAP,
	FG_CAPACITY,
	FG_ASOC,
	AUTH,
	CHG_CURRENT_ADC,
	WC_ADC,
	WC_STATUS,
	WC_ENABLE,
	WC_CONTROL,
	WC_CONTROL_CNT,
	LED_COVER,
	HV_CHARGER_STATUS,
	HV_WC_CHARGER_STATUS,
	HV_CHARGER_SET,
	FACTORY_MODE,
	STORE_MODE,
	UPDATE,
	TEST_MODE,

	BATT_EVENT_CALL,
	BATT_EVENT_2G_CALL,
	BATT_EVENT_TALK_GSM,
	BATT_EVENT_3G_CALL,
	BATT_EVENT_TALK_WCDMA,
	BATT_EVENT_MUSIC,
	BATT_EVENT_VIDEO,
	BATT_EVENT_BROWSER,
	BATT_EVENT_HOTSPOT,
	BATT_EVENT_CAMERA,
	BATT_EVENT_CAMCORDER,
	BATT_EVENT_DATA_CALL,
	BATT_EVENT_WIFI,
	BATT_EVENT_WIBRO,
	BATT_EVENT_LTE,
	BATT_EVENT_LCD,
	BATT_EVENT_GPS,
	BATT_EVENT,
	BATT_TEMP_TABLE,
	BATT_HIGH_CURRENT_USB,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	TEST_CHARGE_CURRENT,
#if defined(CONFIG_STEP_CHARGING)
	TEST_STEP_CONDITION,
#endif
#endif
	SET_STABILITY_TEST,
	BATT_CAPACITY_MAX,
	BATT_INBAT_VOLTAGE,
	BATT_INBAT_VOLTAGE_OCV,
	CHECK_SLAVE_CHG,
	BATT_INBAT_WIRELESS_CS100,
	HMT_TA_CONNECTED,
	HMT_TA_CHARGE,
#if defined(CONFIG_BATTERY_AGE_FORECAST)
	FG_CYCLE,
	FG_FULL_VOLTAGE,
	FG_FULLCAPNOM,
	BATTERY_CYCLE,
	BATTERY_CYCLE_TEST,
#endif
	BATT_WPC_TEMP,
	BATT_WPC_TEMP_ADC,
	BATT_WIRELESS_MST_SWITCH_TEST,
#if defined(CONFIG_WIRELESS_FIRMWARE_UPDATE)
	BATT_WIRELESS_FIRMWARE_UPDATE,
	OTP_FIRMWARE_RESULT,
	WC_IC_GRADE,
	OTP_FIRMWARE_VER_BIN,
	OTP_FIRMWARE_VER,
	TX_FIRMWARE_RESULT,
	TX_FIRMWARE_VER,
	BATT_TX_STATUS,
#endif
	WC_VOUT,
	WC_VRECT,
	WC_TX_EN,
	WC_TX_VOUT,
	BATT_HV_WIRELESS_STATUS,
	BATT_HV_WIRELESS_PAD_CTRL,
	WC_TX_ID,
	WC_OP_FREQ,
	WC_CMD_INFO,
	WC_RX_CONNECTED,
	WC_RX_CONNECTED_DEV,
	WC_TX_MFC_VIN_FROM_UNO,
	WC_TX_MFC_IIN_FROM_UNO,
#if defined(CONFIG_WIRELESS_TX_MODE)
	WC_TX_AVG_CURR,
	WC_TX_TOTAL_PWR,
#endif
	WC_TX_STOP_CAPACITY,
	WC_TX_TIMER_EN,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	BATT_TUNE_FLOAT_VOLTAGE,
	BATT_TUNE_INPUT_CHARGE_CURRENT,
	BATT_TUNE_FAST_CHARGE_CURRENT,
	BATT_TUNE_UI_TERM_CURRENT_1ST,
	BATT_TUNE_UI_TERM_CURRENT_2ND,
	BATT_TUNE_TEMP_HIGH_NORMAL,
	BATT_TUNE_TEMP_HIGH_REC_NORMAL,
	BATT_TUNE_TEMP_LOW_NORMAL,
	BATT_TUNE_TEMP_LOW_REC_NORMAL,
	BATT_TUNE_CHG_TEMP_HIGH,
	BATT_TUNE_CHG_TEMP_REC,
	BATT_TUNE_CHG_LIMMIT_CUR,
	BATT_TUNE_COIL_TEMP_HIGH,
	BATT_TUNE_COIL_TEMP_REC,
	BATT_TUNE_COIL_LIMMIT_CUR,
#endif
#if defined(CONFIG_UPDATE_BATTERY_DATA)
	BATT_UPDATE_DATA,
#endif

	BATT_MISC_EVENT,
	BATT_TX_EVENT,
	BATT_EXT_DEV_CHG,
	BATT_WDT_CONTROL,
	MODE,
	CHECK_PS_READY,
	BATT_CHIP_ID,
	ERROR_CAUSE,
	CISD_FULLCAPREP_MAX,
#if defined(CONFIG_BATTERY_CISD)
	CISD_DATA,
	CISD_DATA_JSON,
	CISD_DATA_D_JSON,
	CISD_WIRE_COUNT,
	CISD_WC_DATA,
	CISD_WC_DATA_JSON,
	CISD_CABLE_DATA,
	CISD_CABLE_DATA_JSON,
	CISD_TX_DATA,
	CISD_TX_DATA_JSON,
	PREV_BATTERY_DATA,
	PREV_BATTERY_INFO,
#endif
	SAFETY_TIMER_SET,
	BATT_SWELLING_CONTROL,
	SAFETY_TIMER_INFO,
	BATT_SHIPMODE_TEST,
#if defined(CONFIG_ENG_BATTERY_CONCEPT)
	BATT_TEMP_TEST,
#endif
	BATT_CURRENT_EVENT,
	BATT_JIG_GPIO,
	CC_INFO,
#if defined(CONFIG_WIRELESS_AUTH)
	WC_AUTH_ADT_SENT,
#endif
	WC_DUO_RX_POWER,
#if defined(CONFIG_BATTERY_SAMSUNG_MHS)
	BATT_CHARGING_PORT,
#endif
	EXT_EVENT,
#if defined(CONFIG_DIRECT_CHARGING)
	DIRECT_CHARGING_STATUS,
	DIRECT_CHARGING_STEP,
#endif
};

enum {
	EXT_DEV_NONE = 0,
	EXT_DEV_GAMEPAD_CHG,
	EXT_DEV_GAMEPAD_OTG,
};

#endif /* __SEC_BATTERY_SYSFS_H */
