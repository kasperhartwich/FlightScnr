#pragma once

/**
 * Waveshare ESP32-S3-Touch-AMOLED-1.75 — 466×466 AMOLED QSPI (CO5300 + CST9217).
 * https://www.waveshare.com/wiki/ESP32-S3-Touch-AMOLED-1.75
 *
 * No rotary encoder: the BOOT button (GPIO 0) acts as the knob button and, on
 * the radar, steps the range. Screen taps replace the encoder elsewhere.
 * No piezo and no haptic driver. Brightness is a CO5300 panel command.
 * The CST9217 reports both axes mirrored relative to the panel.
 */

#define FLIGHTSCNR_BOARD_NAME "waveshare-amoled-175"
#define FLIGHTSCNR_BOARD_WAVESHARE_AMOLED_175 1

#define FLIGHTSCNR_HAS_KNOB_BUTTON 1
#define FLIGHTSCNR_HAS_ENCODER 0
#define FLIGHTSCNR_HAS_BUZZER 0
#define FLIGHTSCNR_HAS_HAPTIC 0
#define FLIGHTSCNR_HAS_LCD_VCI_EN 0
#define FLIGHTSCNR_HAS_LCD_BACKLIGHT_PWM 0
#define FLIGHTSCNR_PANEL_AUTODETECT 0

#ifndef CST9217_SLAVE_ADDRESS
#define CST9217_SLAVE_ADDRESS 0x5A
#endif
/** Not fitted; keeps the shared CST816 code paths compiling. */
#ifndef CST816_SLAVE_ADDRESS
#define CST816_SLAVE_ADDRESS 0x15
#endif

#define IIC_SDA 15
#define IIC_SCL 14

#define TOUCH_INT 11
#define TOUCH_RST 40
/** CST9217 raw coordinates are mirrored on both axes on this board. */
#define FLIGHTSCNR_TOUCH_MIRROR_X 1
#define FLIGHTSCNR_TOUCH_MIRROR_Y 1

#define LCD_SDIO0 4
#define LCD_SDIO1 5
#define LCD_SDIO2 6
#define LCD_SDIO3 7
#define LCD_SCLK 38
#define LCD_CS 12
#define LCD_RST 39
#define LCD_WIDTH 466
#define LCD_HEIGHT 466
/** Panel column memory starts 6 px in (Waveshare Arduino_GFX demo). */
#define LCD_COL_OFFSET 6

#define FLIGHTSCNR_DISPLAY_ROTATION 0

/** BOOT button, active LOW. */
#define KNOB_KEY 0
