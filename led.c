#include "led.h"
#include <stdint.h>
#include "gpio.h"
void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode)
{
    GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL, LOW_SPEED);
    GPIO_Config(GPIOD,PIN15,OUTPUT,OUTPUT_PUSH_PULL, LOW_SPEED);
    GPIO_Config(GPIOA,PIN0,INPUT,OUTPUT_PUSH_PULL, LOW_SPEED); 
}
void ButtonToggleLed(uint32_t *GPIOx, uint8_t Pin, uint8_t PinValue)
{

   GPIO_Write_Pin(GPIOD,PIN15,SET);
   uint8_t status = GPIO_Read_Pin(GPIOA,PIN0);
   uint8_t new_status = GPIO_Read_Pin(GPIOA,PIN0);
     
   if (status == 0 &&  new_status == 1)
   {
   GPIO_Write_Pin(GPIOD,PIN12,SET);   }
   else if (status== 1 &&  new_status == 0)
   {
    GPIO_Write_Pin(GPIOD,PIN12,RESET);

   }
}
