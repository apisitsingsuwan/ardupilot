#pragma once

#include <AP_HAL/AP_HAL_Boards.h>

#ifndef HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED
#define HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif

#ifndef HAL_SIM_PS_RPLIDARA1_ENABLED
#define HAL_SIM_PS_RPLIDARA1_ENABLED HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED
#endif

#ifndef HAL_SIM_PS_RPLIDARA2_ENABLED
#define HAL_SIM_PS_RPLIDARA2_ENABLED HAL_SIM_SERIALPROXIMITYSENSOR_ENABLED
#endif

#ifndef AP_SIM_IS31FL3195_ENABLED
#define AP_SIM_IS31FL3195_ENABLED (CONFIG_HAL_BOARD == HAL_BOARD_SITL)
#endif
