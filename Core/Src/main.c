/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "spi.h"
#include "gpio.h"
#include <stdlib.h>
#include "ws2812b.h"
#include "ws2812b_fx.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_SPI1_Init();
  //MX_SPI2_Init();
  /* USER CODE BEGIN 2 */
	WS2812B_Init(&hspi1);

  WS2812BFX_Init(1);	// Start 3 segments

  WS2812BFX_SetSpeed(0, 0);	// Speed of segment 0
  WS2812BFX_SetSegmentSize(0, 0, 7);
  WS2812BFX_SetColorRGB(0, 255,0,0);
  WS2812BFX_SetColorRGB(1, 0,255,0);
  WS2812BFX_SetColorRGB(2, 0,0,255);
  WS2812BFX_SetColorRGB(3, 0,255,255);
  WS2812BFX_SetColorRGB(4, 0,255,255);
  WS2812BFX_SetColorRGB(5, 0,255,255);
  WS2812BFX_SetColorRGB(6, 0,255,255);
  WS2812BFX_SetColorRGB(7, 0,255,255);
	WS2812BFX_SetMode(1, FX_MODE_STATIC);	// Set mode segment 0
  // WS2812BFX_SetSpeed(1, 500);	// Speed of segment 1
  // WS2812BFX_SetSpeed(2, 500);	// Speed of segment 2
	// WS2812BFX_SetSpeed(3, 500);	// Speed of segment 2
	// WS2812BFX_SetSpeed(4, 500);	// Speed of segment 2
	// WS2812BFX_SetSpeed(5, 500);	// Speed of segment 2
	// WS2812BFX_SetSpeed(6, 500);	// Speed of segment 2
	// WS2812BFX_SetSpeed(7, 500);	// Speed of segment 2
	
//  WS2812BFX_SetColorRGB(0, 255,255,0);
//	WS2812BFX_SetColorRGB(1, 0,255,255);
//	WS2812BFX_SetColorRGB(2, 255,0,255);
//	WS2812BFX_SetMode(0, FX_MODE_BICOLOR_CHASE);	// Set mode segment 0
//	WS2812BFX_SetColorRGB(0, 255,0,0);
//	WS2812BFX_SetColorRGB(1, 255,0,0);
//	WS2812BFX_SetColorRGB(2, 255,0,0);
//	WS2812BFX_SetMode(1, FX_MODE_BICOLOR_CHASE);	// Set mode segment 0
//	WS2812BFX_SetColorRGB(0, 255,0,0);
//	WS2812BFX_SetColorRGB(1, 255,0,0);
//	WS2812BFX_SetMode(2, FX_MODE_BICOLOR_CHASE);	// Set mode segment 0

//  WS2812BFX_SetColorRGB(0, 255,0,0);	// Set color 0
//  WS2812BFX_SetMode(0, FX_MODE_STATIC);	// Set mode segment 0

//  WS2812BFX_SetColorRGB(0, 0,255,0);	// Set color 0
//  WS2812BFX_SetMode(1, FX_MODE_STATIC);	// Set mode segment 1
	
// 	WS2812BFX_SetColorRGB(0, 0,0,255);	// Set color 0
//   WS2812BFX_SetMode(2, FX_MODE_STATIC);	// Set mode segment 1
	
// 	WS2812BFX_SetColorRGB(0, 255,255,0);	// Set color 0
//   WS2812BFX_SetMode(3, FX_MODE_STATIC);	// Set mode segment 1
	
// 	WS2812BFX_SetColorRGB(0, 255,0,255);	// Set color 0
//   WS2812BFX_SetMode(4, FX_MODE_STATIC);	// Set mode segment 1
	
// 	WS2812BFX_SetColorRGB(0, 0,255,255);	// Set color 0
//   WS2812BFX_SetMode(5, FX_MODE_STATIC);	// Set mode segment 1

// 	WS2812BFX_SetColorRGB(0, 255,255,255);	// Set color 0
//   WS2812BFX_SetMode(6, FX_MODE_STATIC);	// Set mode segment 1
	
// 	WS2812BFX_SetColorRGB(0, 0,0,0);	// Set color 0
//   WS2812BFX_SetMode(7, FX_MODE_STATIC);	// Set mode segment 1
	
// WS2812BFX_SetColorRGB(0, 255,0,0);	// Set color 0
//  WS2812BFX_SetColorRGB(1, 0,255,0);		// Set color 1
//  WS2812BFX_SetColorRGB(2, 0,0,255);		// Set color 2
//  WS2812BFX_SetMode(2, FX_MODE_COLOR_WIPE); 	// Set mode segment 2

	WS2812BFX_Start(0);	// Start segment 0
  // WS2812BFX_Start(1);	// Start segment 1
	// WS2812BFX_Start(2);	// Start segment 0
  // WS2812BFX_Start(3);	// Start segment 1
	// WS2812BFX_Start(4);	// Start segment 0
  // WS2812BFX_Start(5);	// Start segment 1
	// WS2812BFX_Start(6);	// Start segment 0
  // WS2812BFX_Start(7);	// Start segment 1
	// WS2812BFX_Callback();	// FX effects calllback
	// WS2812BFX_NextMode(0);
	// 	WS2812BFX_SetColorRGB(0, 0,255,0);	// Set color 0
	// 	WS2812BFX_SetMode(0, FX_MODE_STATIC);	// Set mode segment 0
   HAL_Delay(200);
  /* USER CODE END 2 */
//WS2812BFX_Callback();	
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	WS2812BFX_Callback();	// FX effects calllback
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
void HAL_SYSTICK_Callback(void)
{
	//WS2812BFX_SysTickCallback();	// FX effects software timers
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
