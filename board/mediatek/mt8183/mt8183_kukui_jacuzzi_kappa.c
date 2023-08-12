// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2023 Aneesh Lingala
 */

#include <common.h>
#include <dm.h>
#include <log.h>
#include <wdt.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

int board_init(void)
{
	/* address of boot parameters */
	gd->bd->bi_boot_params = gd->ram_base + 0x100;
        printf("U-Boot for Google Kukui Jacuzzi Kappa");
	return 0;
}
