/**
 *******************************************************************************
 * @file  hc32_ll_icg.c
 * @brief This file provides firmware functions to manage the Initial
 *        Configuration(ICG).
 @verbatim
   Change Logs:
   Date             Author          Notes
   2022-03-31       CDT             First version
   2024-06-30       CDT             Delete ICG2 function
   2024-08-31       CDT             Add __USED for optimize
  @endverbatim
 *******************************************************************************
 * Copyright (C) 2022-2025, Xiaohua Semiconductor Co., Ltd. All rights reserved.
 *
 * This software component is licensed by XHSC under BSD 3-Clause license
 * (the "License"); You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                    opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

/*******************************************************************************
 * Include files
 ******************************************************************************/
#include "hc32_ll_icg.h"

/**
 * @addtogroup LL_Driver
 * @{
 */

/**
 * @defgroup LL_ICG ICG
 * @brief Initial Configuration Driver Library
 * @{
 */

#if (LL_ICG_ENABLE == DDL_ON)

/*******************************************************************************
 * Local type definitions ('typedef')
 ******************************************************************************/

/*******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/
/**
 * @defgroup ICG_Local_Macros ICG Local Macros
 * @{
 */

/**
 * @brief ICG Start Address
 */
#define ICG_START_ADDR                  0x400
#define ICG_START_ADDR_AC6              ".ARM.__at_0x400"

/**
 * @}
 */

/*******************************************************************************
 * Global variable definitions (declared in header file with 'extern')
 ******************************************************************************/

/*******************************************************************************
 * Local function prototypes ('static')
 ******************************************************************************/

/*******************************************************************************
 * Local variable definitions ('static')
 ******************************************************************************/
/**
 * @defgroup ICG_Local_Variables ICG Local Variables
 * @{
 * @brief ICG parameters configuration
 */

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
__USED const uint32_t u32ICGValue[] __attribute__((section(ICG_START_ADDR_AC6))) =
#elif defined (__GNUC__) && !defined (__CC_ARM)
__USED const uint32_t u32ICGValue[] __attribute__((section(".icg_sec"))) =
#elif defined (__CC_ARM)
__USED const uint32_t u32ICGValue[] __attribute__((at(ICG_START_ADDR))) =
#elif defined (__ICCARM__)
#pragma location = ICG_START_ADDR
__USED __root static const uint32_t u32ICGValue[] =
#else
#error "unsupported compiler!!"
#endif
{
    /* ICG 0~1 */
    ICG_REG_CFG0_CONST,
    ICG_REG_CFG1_CONST,
    /* Reserved */
    ICG_REG_RESV_CONST,
    /* ICG 3 */
    ICG_REG_CFG3_CONST,
    /* Reserved */
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    /* Reserved */
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    /* Reserved */
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    /* Reserved */
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    /* Reserved */
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
    ICG_REG_RESV_CONST,
};

/**
 * @}
 */
/*******************************************************************************
 * Function implementation - global ('extern') and local ('static')
 ******************************************************************************/

#endif /* LL_ICG_ENABLE */

/**
 * @}
 */

/**
 * @}
 */

/******************************************************************************
 * EOF (not truncated)
 *****************************************************************************/
