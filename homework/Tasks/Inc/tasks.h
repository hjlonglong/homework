/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2026-10-05 17:28:42
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2026-10-05 17:31:16
 * @FilePath: \homework\Tasks\Inc\tasks.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef __TASKS_H
#define __TASKS_H

#ifdef __cplusplus
extern "C" 
{
#endif

#include "main.h"
#include <stdint.h>

extern volatile uint32_t tick;

void Tasks_Init(void);

#ifdef __cplusplus
}
#endif

#endif