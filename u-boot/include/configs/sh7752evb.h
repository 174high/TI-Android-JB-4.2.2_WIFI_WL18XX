/*
 * Configuation settings for the sh7752evb board
 *
 * Copyright (C) 2012 Renesas Solutions Corp.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __SH7752EVB_H
#define __SH7752EVB_H

#undef DEBUG
#define CONFIG_SH		1
#define CONFIG_SH4A		1
#define CONFIG_SH_32BIT		1
#define CONFIG_CPU_SH7752	1
#define CONFIG_SH7752EVB	1

#define CONFIG_SYS_TEXT_BASE	0x5ff80000
#define CONFIG_SYS_LDSCRIPT	"board/renesas/sh7752evb/u-boot.lds"

#define CONFIG_CMD_MEMORY
#define CONFIG_CMD_NET
#define CONFIG_CMD_MII
#define CONFIG_CMD_PING
#define CONFIG_CMD_NFS
#define CONFIG_CMD_DFL
#define CONFIG_CMD_SDRAM
#define CONFIG_CMD_SF
#define CONFIG_CMD_RUN
#define CONFIG_CMD_SAVEENV
#define CONFIG_CMD_MD5SUM
#define CONFIG_MD5
#define CONFIG_CMD_LOADS
#define CONFIG_CMD_MMC
#define CONFIG_CMD_EXT2
#define CONFIG_DOS_PARTITION
#define CONFIG_MAC_PARTITION

#define CONFIG_BAUDRATE		115200
#define CONFIG_BOOTDELAY	3
#define CONFIG_BOOTARGS		"console=ttySC2,115200 root=/dev/nfs ip=dhcp"

#define CONFIG_VERSION_VARIABLE
#undef	CONFIG_SHOW_BOOT_PROGRESS
#define CONFIG_CMDLINE_EDITING
#define CONFIG_AUTO_COMPLETE

/* MEMORY */
#define SH7752EVB_SDRAM_BASE		(0x40000000)
#define SH7752EVB_SDRAM_SIZE		(512 * 1024 * 1024)

#define CONFIG_SYS_LONGHELP
#define CONFIG_SYS_PROMPT		"=> "
#define CONFIG_SYS_CBSIZE		256
#define CONFIG_SYS_PBSIZE		256
#define CONFIG_SYS_MAXARGS		16
#define CONFIG_SYS_BARGSIZE		512
#define CONFIG_SYS_BAUDRATE_TABLE	{ 115200 }

/* SCIF */
#define CONFIG_SCIF_CONSOLE	1
#define CONFIG_CONS_SCIF2	1
#undef	CONFIG_SYS_CONSOLE_INFO_QUIET
#undef	CONFIG_SYS_CONSOLE_OVERWRITE_ROUTINE
#undef	CONFIG_SYS_CONSOLE_ENV_OVERWRITE

#define CONFIG_SYS_MEMTEST_START	(SH7752EVB_SDRAM_BASE)
#define CONFIG_SYS_MEMTEST_END		(CONFIG_SYS_MEMTEST_START + \
					 480 * 1024 * 1024)
#undef	CONFIG_SYS_ALT_MEMTEST
#undef	CONFIG_SYS_MEMTEST_SCRATCH
#undef	CONFIG_SYS_LOADS_BAUD_CHANGE

#define CONFIG_SYS_SDRAM_BASE		(SH7752EVB_SDRAM_BASE)
#define CONFIG_SYS_SDRAM_SIZE		(SH7752EVB_SDRAM_SIZE)
#define CONFIG_SYS_LOAD_ADDR		(CONFIG_SYS_SDRAM_BASE + \
					 128 * 1024 * 1024)

#define CONFIG_SYS_MONITOR_BASE		0x00000000
#define CONFIG_SYS_MONITOR_LEN		(512 * 1024)
#define CONFIG_SYS_MALLOC_LEN		(4 * 1024 * 1024)
#define CONFIG_SYS_BOOTMAPSZ		(8 * 1024 * 1024)

/* FLASH */
#define CONFIG_SYS_NO_FLASH

/* Ether */
#define CONFIG_SH_ETHER			1
#define CONFIG_SH_ETHER_USE_PORT	0
#define CONFIG_SH_ETHER_PHY_ADDR	18
#define CONFIG_SH_ETHER_CACHE_WRITEBACK	1
#define CONFIG_SH_ETHER_USE_GETHER	1
#define CONFIG_PHYLIB
#define CONFIG_BITBANGMII
#define CONFIG_BITBANGMII_MULTI
#define CONFIG_SH_ETHER_PHY_MODE PHY_INTERFACE_MODE_RGMII
#define CONFIG_PHY_VITESSE

#define SH7752EVB_ETHERNET_MAC_BASE_SPI	0x00090000
#define SH7752EVB_SPI_SECTOR_SIZE	(64 * 1024)
#define SH7752EVB_ETHERNET_MAC_BASE	SH7752EVB_ETHERNET_MAC_BASE_SPI
#define SH7752EVB_ETHERNET_MAC_SIZE	17
#define SH7752EVB_ETHERNET_NUM_CH	2
#define CONFIG_BOARD_LATE_INIT

/* SPI */
#define CONFIG_SH_SPI			1
#define CONFIG_SH_SPI_BASE		0xfe002000
#define CONFIG_SPI_FLASH
#define CONFIG_SPI_FLASH_STMICRO	1
#define CONFIG_SPI_FLASH_MACRONIX	1

/* MMCIF */
#define CONFIG_MMC			1
#define CONFIG_GENERIC_MMC		1
#define CONFIG_SH_MMCIF			1
#define CONFIG_SH_MMCIF_ADDR		0xffcb0000
#define CONFIG_SH_MMCIF_CLK		48000000

/* ENV setting */
#define CONFIG_ENV_IS_EMBEDDED
#define CONFIG_ENV_IS_IN_SPI_FLASH
#define CONFIG_ENV_SECT_SIZE	(64 * 1024)
#define CONFIG_ENV_ADDR		(0x00080000)
#define CONFIG_ENV_OFFSET	(CONFIG_ENV_ADDR)
#define CONFIG_ENV_OVERWRITE	1
#define CONFIG_ENV_SIZE		(CONFIG_ENV_SECT_SIZE)
#define CONFIG_ENV_SIZE_REDUND	(CONFIG_ENV_SECT_SIZE)
#define CONFIG_EXTRA_ENV_SETTINGS				\
		"netboot=bootp; bootm\0"

/* Board Clock */
#define CONFIG_SYS_CLK_FREQ	48000000
#define CONFIG_SYS_TMU_CLK_DIV	4
#define CONFIG_SYS_HZ		1000
#endif	/* __SH7752EVB_H */
