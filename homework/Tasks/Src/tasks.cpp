/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2026-10-05 22:18:05
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2026-10-06 10:42:51
 * @FilePath: \homework\Tasks\Src\tasks.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "tasks.h"

extern TIM_HandleTypeDef htim2;
extern IWDG_HandleTypeDef hiwdg;

volatile uint32_t tick = 0;

extern "C" void Tasks_Init(void)
{
   
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);

    tick = 0;

    HAL_TIM_Base_Start_IT(&htim2);
}

extern "C" void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM2)          
    {
        tick = tick + 1;
               
    }
}