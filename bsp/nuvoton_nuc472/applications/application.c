/*
 * File      : main.c
 * This file is part of RT-Thread RTOS
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017-12-12     Bluebear233  first implementation
 */
#include <rtconfig.h>
#include <rtthread.h>

int main(void)
{
    while(1){
        rt_thread_delay(RT_TICK_PER_SECOND);
    }
}

