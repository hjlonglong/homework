# homework
# 电控第一次作业

## 芯片
STM32F103C8T6

## 内容
1. GPIO：PC13 输出低电平，点亮板载 LED
2. 定时器：TIM2 更新中断，1ms 周期，tick 自增
3. 看门狗：IWDG 超时约 2s，观察 tick 涨到约 2000 后复位归零
