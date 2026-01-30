#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS { GP2, GP3, GP4 }

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN GP0
#define RGBLED_NUM 6

#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN GP27
#define I2C1_SDA_PIN GP26
