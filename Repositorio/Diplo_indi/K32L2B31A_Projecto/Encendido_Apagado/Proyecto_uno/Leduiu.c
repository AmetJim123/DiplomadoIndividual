/*! @file : Leduiu.c
 * @author  Amet Jose Jimenez Granados
 * @version 1.0.0
 * @date    2/09/2021
 * @brief   Driver para controlar leds de tarjeta frmd-k32l2b3
 * @details
 *
*/
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "Leduiu.h"
#include "fsl_gpio.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/




/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/




/*******************************************************************************
 * External vars
 ******************************************************************************/




/*******************************************************************************
 * Local vars
 ******************************************************************************/




/*******************************************************************************
 * Private Source Code
 ******************************************************************************/




/*******************************************************************************
 * Public Source Code
 ******************************************************************************/
 void green_led_on(){
     // encendido led verde
     GPIO_PinWrite(GPIOD,5,0);
 }
 /*----------------------------------------------------------------------------------*/
 void green_led_off(){
     // apagado led verde
     GPIO_PinWrite(GPIOD,5,1);
 }
 void red_led_on(){
      // encendido led rojo
      GPIO_PinWrite(GPIOE,31U,0);
  }
  /*----------------------------------------------------------------------------------*/
  void red_led_off(){
      // apagado led rojo
      GPIO_PinWrite(GPIOE,31U,1);
  }
