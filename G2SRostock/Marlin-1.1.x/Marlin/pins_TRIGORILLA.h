/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 adjusted pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "TRIGORILLA supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "TRIGORILLA"
#define IS_RAMPS_EFB
#define FAN1_PIN 7
#define FAN2_PIN 44
#define HEATER_1_PIN 45
#define TEMP_3_PIN 12

#include "pins_RAMPS.h"