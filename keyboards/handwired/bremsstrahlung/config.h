// Copyright 2023 Gustav Petersson (@gustav.petersson@gmail.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Bootloader */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAR_RESET_TIMEOUT 500U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP18

#define AUDIO_PIN GP16
#define AUDIO_PWM_DRIVER PWMD0
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

/* I2C */
#define I2C_DRIVER I2CD0
#define I2C1_SCL_PIN GP17
#define I2C1_SDA_PIN GP16

/* OLED */
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_IC OLED_IC_SSD1306
