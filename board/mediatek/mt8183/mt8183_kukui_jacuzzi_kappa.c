// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2023 Aneesh Lingala
 */

#include <common.h>
#include <mmc.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

int board_init(void)
{
        printf("U-Boot for Google Kukui Jacuzzi Kappa");
	return 0;
}

#ifdef CONFIG_MMC
int mmc_get_boot_dev(void)
{
	int g_mmc_devid = -1;
	char *uflag = (char *)0x81DFFFF0;

	if (!find_mmc_device(1))
		return 0;

	if (strncmp(uflag,"eMMC",4)==0) {
		g_mmc_devid = 0;
		printf("Boot From Emmc(id:%d)\n\n", g_mmc_devid);
	} else {
		g_mmc_devid = 1;
		printf("Boot From SD Card(id:%d)\n\n", g_mmc_devid);
	}
	return g_mmc_devid;
}

int mmc_get_env_dev(void)
{
	return mmc_get_boot_dev();
}
#endif
