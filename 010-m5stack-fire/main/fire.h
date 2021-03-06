/*

Adapted from Lode's classic fire tutorial: http://lodev.org/cgtutor/fire.html

Copyright (c) 2004-2007 Lode Vandevenne
Copyright (c) 2018 Mika Tuupola

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/

#include <stdint.h>
#include <bitmap.h>

#include <copepod_hal.h>

// #define FIRE_WIDTH      (110)
// #define FIRE_HEIGHT     (80)

#define FIRE_WIDTH      (DISPLAY_WIDTH / 2)
#define FIRE_HEIGHT     (DISPLAY_HEIGHT / 2)

void fire_init();
void fire_clear();
void fire_feed();
void fire_effect(bitmap_t *dst, uint16_t multiplier, uint16_t divider);
void fire_putchar(char ascii, int16_t x0, int16_t y0, const char font[][8]);
void fire_putstring(char ascii[], int16_t x0, int16_t y0, const char font[][8]);
