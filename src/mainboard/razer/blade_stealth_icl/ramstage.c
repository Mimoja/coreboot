/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 Mimoja <coreboot@mimoja.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <soc/gpio.h>
#include <soc/ramstage.h>

#include "gpio.h"

void mainboard_silicon_init_params(FSP_S_CONFIG *params)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
