/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 Johanna Schander <coreboot@mimoja.de>
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

#include <arch/cpu.h>
#include <intelblocks/mp_init.h>
#include <stdint.h>
#include <string.h>

#include "spd.h"

// DQ byte map
void mainboard_fill_dq_map_data(void *dq_map_ptr)
{
	const u8 dq_map[12] = {0x0F, 0xF0, 0x0F, 0xF0, 0xFF, 0x00,
			       0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

	memcpy(dq_map_ptr, dq_map, sizeof(dq_map));
}

// DQS map ch0
void mainboard_fill_dqs_map_ch0_data(void *dqs_map_ptr)
{
	//    const u8 dqs_map_u_lpddr[8] = { 2, 3, 0, 1, 7, 6, 4, 5 };
	//    const u8 dqs_map_u_lpddr_type_3[8] = { 2, 3, 1, 0, 7, 6, 4, 5 };

	const u8 dqs_map[8] = {2, 3, 0, 1, 7, 6, 4, 5};
	memcpy(dqs_map_ptr, dqs_map, sizeof(dqs_map));
}

// DQS map ch1
void mainboard_fill_dqs_map_ch1_data(void *dqs_map_ptr)
{
	const u8 dqs_map[8] = {1, 0, 3, 2, 5, 4, 7, 6};
	memcpy(dqs_map_ptr, dqs_map, sizeof(dqs_map));
}

// Rcomp resistor
void mainboard_fill_rcomp_res_data(void *rcomp_ptr)
{
	const u16 RcompResistor[3] = {100, 100, 100};
	memcpy(rcomp_ptr, RcompResistor, sizeof(RcompResistor));
}

// Rcomp target
void mainboard_fill_rcomp_strength_data(void *rcomp_strength_ptr)
{
	//     static const u16 RcompTarget_LPDDR4_Ax[RCOMP_TARGET_PARAMS] = {
	//             80, 40, 40, 40, 30 };
	//     static const u16 RcompTarget_LPDDR4_Bx[RCOMP_TARGET_PARAMS] = {
	//             60, 20, 20, 20, 20 };

	static const u16 RcompTarget[RCOMP_TARGET_PARAMS] = {80, 40, 40, 40, 30};

	memcpy(rcomp_strength_ptr, RcompTarget, sizeof(RcompTarget));
}
