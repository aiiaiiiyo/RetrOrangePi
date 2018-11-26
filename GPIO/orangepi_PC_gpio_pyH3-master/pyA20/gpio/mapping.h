/*
 *
 * This file is part of pyA20.
 * mapping.h is python GPIO extension.
 *
 * Copyright (c) 2014 Stefan Mavrodiev @ OLIMEX LTD, <support@olimex.com>
 *
 * pyA20 is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef __MAPPING_H
#define __MAPPING_H

#include "gpio_lib.h"

/**
Structure that describe all gpio
*/
typedef struct _pin {
    char name[10];          // The processor pin
    int offset;             // Memory offset for the pin
    int pin_number;         // Number on the connector
}pin_t;

typedef struct _gpio {
    char connector_name[10];
    pin_t pins[41];
}gpio_t;


gpio_t gpio[] = {

    /*
    #define PIN_PG0		SUNXI_GPG(0)

*/  {"gpio1",
        {
            {   "PA12",  SUNXI_GPA(12),  3   },
            {   "PA11",  SUNXI_GPA(11),  5   },
            {   "PA6",  SUNXI_GPA(6),  7   },
            {   "PA13",  SUNXI_GPA(13),  8   },
            {   "PA14",  SUNXI_GPA(14),  10  },
            {   "PA1",  SUNXI_GPA(1),  11   },
            /*{   "PD14",  SUNXI_GPD(14),  12   },*/
            {   "PA16",  SUNXI_GPA(16),  12   },
            {   "PA0",  SUNXI_GPA(0),  13   },
            {   "PA3",  SUNXI_GPA(3),  15   },
            /*{   "PC4",  SUNXI_GPC(4),  16   },*/
            {   "PA15",  SUNXI_GPA(15),  16   },
            /*{   "PC7",  SUNXI_GPC(7),  18   },*/
            {   "PC4",  SUNXI_GPC(4),  18   },
            {   "PC0",  SUNXI_GPC(0),  19   },
            {   "PC1",  SUNXI_GPC(1),  21   },
            {   "PA2",  SUNXI_GPA(2),  22   },
            {   "PC2",  SUNXI_GPC(2),  23   },
            {   "PC3",  SUNXI_GPC(3),  24   },
            /*{   "PA21",  SUNXI_GPA(21),  26   },*/
            {   "PC7",  SUNXI_GPC(7),  26   },
            {   "PA19",  SUNXI_GPA(19),  27   },
            {   "PA18",  SUNXI_GPA(18),  28  },
            {   "PA7",  SUNXI_GPA(7),  29   },
            {   "PA8",  SUNXI_GPA(8),  31   },
            /*{   "PG8",  SUNXI_GPG(8),  32   },*/
            {   "PL2",  SUNXI_GPL(2),  32   },
            {   "PA9",  SUNXI_GPA(9),  33   },
            {   "PA10",  SUNXI_GPA(10),  35   },
            /*{   "PG9",  SUNXI_GPG(9),  36   },*/
            {   "PL4",  SUNXI_GPL(4),  36   },
            /*{   "PA20",  SUNXI_GPA(20),  37   },*/
            {   "PA17",  SUNXI_GPA(17),  37   },
            /*{   "PG6",  SUNXI_GPG(6),  38   },*/
            {   "PA21",  SUNXI_GPA(21),  38   },
            /*{   "PG7",  SUNXI_GPG(7),  40   },*/
            {   "PA20",  SUNXI_GPA(20),  40   },
            {
                {   0,  0,  0}
            },
        }
    },
  /*
    #define PIN_PG0		SUNXI_GPG(0)

*/  {"LED",
        {
            {   "POWER_LED",  SUNXI_GPL(10),  1   },
            {   "STATUS_LED",  SUNXI_GPA(15),  2   },
            {
                {   0,  0,  0}
            },
        }
    },
};



#endif
