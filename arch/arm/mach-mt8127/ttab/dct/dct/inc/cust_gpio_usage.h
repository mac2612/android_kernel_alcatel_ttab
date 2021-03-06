/*
 * Generated by MTK SP Drv_CodeGen Version 03.13.6  for MT8127. Copyright MediaTek Inc. (C) 2013.
 * Mon Mar 19 18:10:35 2018
 * Do Not Modify the File.
 */

#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_PMIC_EINT_PIN         (GPIO2 | 0x80000000)
#define GPIO_PMIC_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PMIC_EINT_PIN_M_EINT  GPIO_PMIC_EINT_PIN_M_GPIO

#define GPIO_CAMERA_CMPDN1_PIN         (GPIO5 | 0x80000000)
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_CAMERA_CMRST1_PIN         (GPIO6 | 0x80000000)
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_AUD_CLK_MOSI_PIN         (GPIO7 | 0x80000000)
#define GPIO_AUD_CLK_MOSI_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_AUD_CLK_MOSI_PIN_M_CLK  GPIO_MODE_01

#define GPIO_AUD_DAT_MISO_PIN         (GPIO8 | 0x80000000)
#define GPIO_AUD_DAT_MISO_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_AUD_DAT_MISO_PIN_M_AUD_MISO   GPIO_MODE_01

#define GPIO_AUD_DAT_MOSI_PIN         (GPIO9 | 0x80000000)
#define GPIO_AUD_DAT_MOSI_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_AUD_DAT_MOSI_PIN_M_AUD_MOSI   GPIO_MODE_01

#define GPIO_NFC_OSC_EN_PIN         (GPIO13 | 0x80000000)
#define GPIO_NFC_OSC_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NFC_OSC_EN_PIN_M_CLK  GPIO_MODE_01

#define GPIO_HALL_1_PIN         (GPIO18 | 0x80000000)
#define GPIO_HALL_1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_HALL_1_PIN_M_CLK  GPIO_MODE_01

#define GPIO_NFC_VENB_PIN         (GPIO19 | 0x80000000)
#define GPIO_NFC_VENB_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_NFC_VENB_PIN_M_PCM_SYNC   GPIO_MODE_01

#define GPIO_HALL_2_PIN         (GPIO20 | 0x80000000)
#define GPIO_HALL_2_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_SUB_CAM_ID_PIN         (GPIO22 | 0x80000000)
#define GPIO_SUB_CAM_ID_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_SUB_CAM_ID_PIN_M_PWM  GPIO_MODE_01

#define GPIO_ACCDET_EINT_PIN         (GPIO23 | 0x80000000)
#define GPIO_ACCDET_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_PWM  GPIO_MODE_01
#define GPIO_ACCDET_EINT_PIN_M_EINT  GPIO_ACCDET_EINT_PIN_M_GPIO

#define GPIO_MAIN_CAM_ID_PIN         (GPIO24 | 0x80000000)
#define GPIO_MAIN_CAM_ID_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_MAIN_CAM_ID_PIN_M_CLK  GPIO_MODE_01
#define GPIO_MAIN_CAM_ID_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_MAIN_CAM_ID_PIN_CLK     CLK_OUT0
#define GPIO_MAIN_CAM_ID_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CTP_RST_PIN         (GPIO25 | 0x80000000)
#define GPIO_CTP_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CTP_RST_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_CTP_RST_PIN_CLK     CLK_OUT1
#define GPIO_CTP_RST_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_HDMI_POWER_CONTROL         (GPIO27 | 0x80000000)
#define GPIO_HDMI_POWER_CONTROL_M_GPIO  GPIO_MODE_00
#define GPIO_HDMI_POWER_CONTROL_M_KCOL  GPIO_MODE_06

#define GPIO_CAMERA_CMPDN_PIN         (GPIO29 | 0x80000000)
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_CTP_EINT_PIN         (GPIO30 | 0x80000000)
#define GPIO_CTP_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_CLK  GPIO_MODE_02
#define GPIO_CTP_EINT_PIN_M_EINT  GPIO_CTP_EINT_PIN_M_GPIO
#define GPIO_CTP_EINT_PIN_CLK     CLK_OUT3
#define GPIO_CTP_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_GSE_1_EINT_PIN         (GPIO31 | 0x80000000)
#define GPIO_GSE_1_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GSE_1_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_GSE_1_EINT_PIN_M_EINT  GPIO_GSE_1_EINT_PIN_M_GPIO
#define GPIO_GSE_1_EINT_PIN_CLK     CLK_OUT4
#define GPIO_GSE_1_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_GSE_2_EINT_PIN         (GPIO32 | 0x80000000)
#define GPIO_GSE_2_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GSE_2_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_GSE_2_EINT_PIN_M_EINT  GPIO_GSE_2_EINT_PIN_M_GPIO
#define GPIO_GSE_2_EINT_PIN_CLK     CLK_OUT5
#define GPIO_GSE_2_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_KPD_KROW0_PIN         (GPIO33 | 0x80000000)
#define GPIO_KPD_KROW0_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KROW0_PIN_M_KROW  GPIO_MODE_01

#define GPIO_CAMERA_CMRST_PIN         (GPIO34 | 0x80000000)
#define GPIO_CAMERA_CMRST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST_PIN_M_KROW  GPIO_MODE_01

#define GPIO_OTG_DRVVBUS_PIN         (GPIO35 | 0x80000000)
#define GPIO_OTG_DRVVBUS_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_OTG_DRVVBUS_PIN_M_KROW  GPIO_MODE_01

#define GPIO_KPD_KCOL0_PIN         (GPIO36 | 0x80000000)
#define GPIO_KPD_KCOL0_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_KPD_KCOL1_PIN         (GPIO37 | 0x80000000)
#define GPIO_KPD_KCOL1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL1_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_OTG_IDDIG_EINT_PIN         (GPIO38 | 0x80000000)
#define GPIO_OTG_IDDIG_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_OTG_IDDIG_EINT_PIN_M_KCOL  GPIO_MODE_01
#define GPIO_OTG_IDDIG_EINT_PIN_M_IDDIG   GPIO_MODE_02

#define GPIO_MSDC1_INSI         (GPIO43 | 0x80000000)
#define GPIO_MSDC1_INSI_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_INSI_M_CLK  GPIO_MODE_01
#define GPIO_MSDC1_INSI_M_KROW  GPIO_MODE_03
#define GPIO_MSDC1_INSI_M_PWM  GPIO_MODE_02
#define GPIO_MSDC1_INSI_M_EINT  GPIO_MSDC1_INSI_M_GPIO
#define GPIO_MSDC1_INSI_CLK     CLK_OUT4
#define GPIO_MSDC1_INSI_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CTP_EN_PIN         (GPIO45 | 0x80000000)
#define GPIO_CTP_EN_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_MHALL_EINT_PIN         (GPIO50 | 0x80000000)
#define GPIO_MHALL_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_MHALL_EINT_PIN_M_CLK  GPIO_MODE_02
#define GPIO_MHALL_EINT_PIN_M_EINT  GPIO_MHALL_EINT_PIN_M_GPIO
#define GPIO_MHALL_EINT_PIN_CLK     CLK_OUT3
#define GPIO_MHALL_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_ALS_EINT_PIN         (GPIO51 | 0x80000000)
#define GPIO_ALS_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_CLK  GPIO_MODE_04
#define GPIO_ALS_EINT_PIN_M_EINT  GPIO_ALS_EINT_PIN_M_GPIO
#define GPIO_ALS_EINT_PIN_CLK     CLK_OUT1
#define GPIO_ALS_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_I2C1_SDA_PIN         (GPIO57 | 0x80000000)
#define GPIO_I2C1_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C1_SCA_PIN         (GPIO58 | 0x80000000)
#define GPIO_I2C1_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C0_SDA_PIN         (GPIO75 | 0x80000000)
#define GPIO_I2C0_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C0_SCA_PIN         (GPIO76 | 0x80000000)
#define GPIO_I2C0_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_UART_URXD1_PIN         (GPIO79 | 0x80000000)
#define GPIO_UART_URXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD1_PIN_M_URXD   GPIO_MODE_01

#define GPIO_UART_UTXD1_PIN         (GPIO80 | 0x80000000)
#define GPIO_UART_UTXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD1_PIN_M_UTXD   GPIO_MODE_01

#define GPIO_LCM_RST         (GPIO83 | 0x80000000)
#define GPIO_LCM_RST_M_GPIO  GPIO_MODE_00

#define GPIO_LCM_PWR_EN         (GPIO85 | 0x80000000)
#define GPIO_LCM_PWR_EN_M_GPIO  GPIO_MODE_00

#define GPIO_CAMERA_FLASH_EN_PIN         (GPIO117 | 0x80000000)
#define GPIO_CAMERA_FLASH_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_EN_PIN_M_ANT_SEL   GPIO_MODE_03

#define GPIO_GPS_LNA_PIN         (GPIO118 | 0x80000000)
#define GPIO_GPS_LNA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GPS_LNA_PIN_M_CMDAT   GPIO_MODE_01
#define GPIO_GPS_LNA_PIN_M_CMCSD   GPIO_MODE_02
#define GPIO_GPS_LNA_PIN_M_ANT_SEL   GPIO_MODE_03
#define GPIO_GPS_LNA_PIN_M_DBG_MON_B   GPIO_MODE_07


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */




/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */


