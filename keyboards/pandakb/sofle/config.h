#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { 5,  6,  7,  8,  9 }
#define MATRIX_COL_PINS { 27, 26, 22, 20, 23, 21 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

#define TAP_CODE_DELAY 10

#define SPLIT_HAND_PIN GP4
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
#define USB_VBUS_PIN 19
#define USE_SERIAL
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TX_PIN   GP1

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_LED_COUNT       72 // Number of LEDs
    #define RGBLED_NUM RGB_MATRIX_LED_COUNT
    #define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT
    #define RGB_MATRIX_SPLIT { 36, 36 }
    #define WS2812_DI_PIN            GP0
    #define WS2812_PIO_USE_PIO1

    #define SPLIT_TRANSPORT_MIRROR
    #define RGB_MATRIX_SLEEP
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128

    #define ENABLE_RGB_MATRIX_BREATHING           // Single hue brightness cycling animation
#endif
