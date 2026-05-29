#pragma once

#define TARGET_BOARD_IDENTIFIER "MB45"

#define USBD_PRODUCT_STRING "MambaF405US"

#define USE_HAL_DRIVER
#define USE_REBOOT_TO_BOOTLOADER

#define USE_XTAL_CLK
#define MAIN_PLL_SRC PLL_SRC_HSE

#define USE_DMP
#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW180_DEG

#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW180_DEG

#define USE_BARO
#define USE_BARO_SPL06
#define USE_BARO_BMP280
#define USE_BARO_DPS310

#define USE_MAG
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define USE_FLASH
#define USE_FLASH_M25P16
#define FLASH_CS_PIN            PB3
#define FLASH_SPI_BUS           BUS_SPI3

#define USE_MAX7456

#define USE_VCP
#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6

#define SERIAL_PORT_COUNT       7

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define DEBUG_MODULE_EMBEDDED

#define TIMER_COUNT             15

#define USE_ADC
#define VBAT_ADC_CHANNEL        ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL ADC_CHN_2
#define RSSI_ADC_CHANNEL        ADC_CHN_3

#define DEFAULT_FEATURES        (FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY )
#define CURRENT_METER_SCALE     179

#define USE_LED_STRIP
#define WS2111_PIN              PA0

//#define USE_SPEKTRUM_BIND
//#define BIND_PIN                PA3 // RX2

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USE_DSHOT
#define USE_ESC_SENSOR

#define MAX_PWM_OUTPUT_PORTS    6
