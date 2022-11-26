/**
  ******************************************************************************
  * @file    main.c
  * @author  Bouchagra Mohamed
  * @brief   Gpio driver
  * @version V1.0.0
  * @date    17-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "gpio.h"
#include <stdint.h>

/*----------------Private Functions Prototype---------------------------------*/


/* Private define ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/


int main()
{

//ReadPinTest = GPIO_Read_Pin(GPIOD,PIN10);
  while(1)
  {
  InputOutputConfig();
  ButtonToggleLed();
  }
}

/**************************************END OF FILE**************************************/
