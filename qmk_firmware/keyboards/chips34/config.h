// Copyright 2023 Alexander Ireland (@XanderIRE)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define USE_SERIAL
#define SOFT_SERIAL_PIN D3

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS {{D2, D0, F6, D7, B3}, \
                     {D1, F5, C6, B1, B4}, \
                     {F4, D4, F7, E6, B2}, \
                     {NO_PIN, NO_PIN, NO_PIN, B6, B5}}
#define DIRECT_PINS_RIGHT {{B3, D7, F6, D0, D2}, \
                           {B4, B1, C6, F5, D1}, \
                           {B2, E6, F7, D4, F4}, \
                           {B5, B6, NO_PIN, NO_PIN, NO_PIN}}

/* Mod-tap / Layer-tap Useability Settings */
#define TAPPING_TERM 225
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define RETRO_TAPPING_PER_KEY




/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
