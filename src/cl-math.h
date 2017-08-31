/*
 * Copyright 2017 - Soroush Rabiei, <soroush@ametisco.ir>
 * This file is part of libcalendar.
 *
 * libcalendar is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libcalendar is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libcalendar.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LIBCALENDAR_MATH_H
#define LIBCALENDAR_MATH_H

#include <math.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

div_t clm_pdiv(int d, int v);
int clm_floor_div(int a, int b);

#ifdef __cplusplus
}
#endif

#endif /* LIBCALENDAR_MATH_H */