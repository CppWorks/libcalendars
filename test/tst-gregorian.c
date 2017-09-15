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

#include "../src/cl-gregorian.h"
#include "tst-common.h"
#include <stdio.h>

/* Because it makes no sense to convert dates from Gregorian to Gregorian,
 * we provide dummy funvtions for tests.
 */

void gr_to_gr1(int16_t  cyear, uint8_t  cmonth, uint16_t  cday,
               int16_t* gyear, uint8_t* gmonth, uint16_t* gday) {
    *gyear = cyear;
    *gmonth = cmonth;
    *gday = cday;
}
void gr_to_gr2(int16_t  gyear, uint8_t  gmonth, uint16_t  gday,
               int16_t* cyear, uint8_t* cmonth, uint16_t* cday) {
    *cyear = gyear;
    *cmonth = gmonth;
    *cday = gday;
}

int main() {
    cal_to_jdn = &gr_to_jdn;
    jdn_to_cal = &jdn_to_gr;
    cal_to_gr = & gr_to_gr1;
    gr_to_cal = & gr_to_gr2;
    return tst_calendar(0, 2488069);
}