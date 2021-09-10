/*! @file : Leduiu.h
 * @author  Amet Jose Jimenez Granados
 * @version 1.0.0
 * @date    2/09/2021
 * @brief   Driver para controlar leds de tarjeta frmd-k32l2b3
 * @details
 *
 */
#ifndef IOT_SDK_PERIPHERALS_LEDS_H_
#define IOT_SDK_PERIPHERALS_LEDS_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/




/*!
 * @addtogroup peripherals
 * @{
 */
/*!
 * @addtogroup leds
 * @{
 */
/*******************************************************************************
 * Public Definitions
 ******************************************************************************/



/*******************************************************************************
 * External vars
 ******************************************************************************/



/*******************************************************************************
 * Public vars
 ******************************************************************************/



/*******************************************************************************
 * Public Prototypes
 ******************************************************************************/
/*!
 * @brief enciende leds verde y rojo de tarjeta frdm-k32l2b3
 *
 */
void green_led_on();
void red_led_on();
/*----------------------------------------------------------------------------------*/
/*!
 * @brief apagar leds verde y rojo de tarjeta frdm-k32l2b3
 *
 */
void green_led_off();
void red_led_off();



/** @} */ // end of X leds
/** @} */ // end of X peripherals



#endif /* IOT_SDK_PERIPHERALS_LEDS_H_ */
