// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2023 Aneesh Lingala
 */

#include <common.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

int board_init(void)
{
        printf("U-Boot for Google Kukui Jacuzzi Kappa");
	return 0;
}
