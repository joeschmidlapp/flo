/*
 * arch/arm/mach-spear3xx/include/mach/spear.h
 *
 * SPEAr3xx Machine family specific definition
 *
 * Copyright (C) 2009 ST Microelectronics
 * Viresh Kumar<viresh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_SPEAR3XX_H
#define __MACH_SPEAR3XX_H

#include <asm/memory.h>
#include <mach/spear300.h>
#include <mach/spear310.h>
#include <mach/spear320.h>

#define SPEAR3XX_ML_SDRAM_BASE		UL(0x00000000)

#define SPEAR3XX_ICM9_BASE		UL(0xC0000000)

/* ICM1 - Low speed connection */
#define SPEAR3XX_ICM1_2_BASE		UL(0xD0000000)
#define SPEAR3XX_ICM1_UART_BASE		UL(0xD0000000)
#define VA_SPEAR3XX_ICM1_UART_BASE	IO_ADDRESS(SPEAR3XX_ICM1_UART_BASE)
#define SPEAR3XX_ICM1_ADC_BASE		UL(0xD0080000)
#define SPEAR3XX_ICM1_SSP_BASE		UL(0xD0100000)
#define SPEAR3XX_ICM1_I2C_BASE		UL(0xD0180000)
#define SPEAR3XX_ICM1_JPEG_BASE		UL(0xD0800000)
#define SPEAR3XX_ICM1_IRDA_BASE		UL(0xD1000000)
#define SPEAR3XX_ICM1_SRAM_BASE		UL(0xD2800000)

/* ICM2 - Application Subsystem */
#define SPEAR3XX_ICM2_HWACCEL0_BASE	UL(0xD8800000)
#define SPEAR3XX_ICM2_HWACCEL1_BASE	UL(0xD9000000)

/* ICM4 - High Speed Connection */
#define SPEAR3XX_ICM4_BASE		UL(0xE0000000)
#define SPEAR3XX_ICM4_MII_BASE		UL(0xE0800000)
#define SPEAR3XX_ICM4_USBD_FIFO_BASE	UL(0xE1000000)
#define SPEAR3XX_ICM4_USBD_CSR_BASE	UL(0xE1100000)
#define SPEAR3XX_ICM4_USBD_PLDT_BASE	UL(0xE1200000)
#define SPEAR3XX_ICM4_USB_EHCI0_1_BASE	UL(0xE1800000)
#define SPEAR3XX_ICM4_USB_OHCI0_BASE	UL(0xE1900000)
#define SPEAR3XX_ICM4_USB_OHCI1_BASE	UL(0xE2100000)
#define SPEAR3XX_ICM4_USB_ARB_BASE	UL(0xE2800000)

/* ML1 - Multi Layer CPU Subsystem */
#define SPEAR3XX_ICM3_ML1_2_BASE	UL(0xF0000000)
#define SPEAR3XX_ML1_TMR_BASE		UL(0xF0000000)
#define SPEAR3XX_ML1_VIC_BASE		UL(0xF1100000)
#define VA_SPEAR3XX_ML1_VIC_BASE	IO_ADDRESS(SPEAR3XX_ML1_VIC_BASE)

/* ICM3 - Basic Subsystem */
#define SPEAR3XX_ICM3_SMEM_BASE		UL(0xF8000000)
#define SPEAR3XX_ICM3_SMI_CTRL_BASE	UL(0xFC000000)
#define SPEAR3XX_ICM3_DMA_BASE		UL(0xFC400000)
#define SPEAR3XX_ICM3_SDRAM_CTRL_BASE	UL(0xFC600000)
#define SPEAR3XX_ICM3_TMR0_BASE		UL(0xFC800000)
#define SPEAR3XX_ICM3_WDT_BASE		UL(0xFC880000)
#define SPEAR3XX_ICM3_RTC_BASE		UL(0xFC900000)
#define SPEAR3XX_ICM3_GPIO_BASE		UL(0xFC980000)
#define SPEAR3XX_ICM3_SYS_CTRL_BASE	UL(0xFCA00000)
#define VA_SPEAR3XX_ICM3_SYS_CTRL_BASE	IO_ADDRESS(SPEAR3XX_ICM3_SYS_CTRL_BASE)
#define SPEAR3XX_ICM3_MISC_REG_BASE	UL(0xFCA80000)
#define VA_SPEAR3XX_ICM3_MISC_REG_BASE	IO_ADDRESS(SPEAR3XX_ICM3_MISC_REG_BASE)
#define SPEAR3XX_ICM3_TMR1_BASE		UL(0xFCB00000)

/* Debug uart for linux, will be used for debug and uncompress messages */
#define SPEAR_DBG_UART_BASE		SPEAR3XX_ICM1_UART_BASE
#define VA_SPEAR_DBG_UART_BASE		VA_SPEAR3XX_ICM1_UART_BASE

/* Sysctl base for spear platform */
#define SPEAR_SYS_CTRL_BASE		SPEAR3XX_ICM3_SYS_CTRL_BASE
#define VA_SPEAR_SYS_CTRL_BASE		VA_SPEAR3XX_ICM3_SYS_CTRL_BASE

#endif /* __MACH_SPEAR3XX_H */
