/*! @file : leds.h
 * @author  Amet Jose Jimenez Granados
 * @version 1.0.0
 * @date    10/09/2021
 * @brief   Driver para controlar LEDs de tarjeta FRDM-K32L2B3
 * @details
 *
 */
#ifndef IOT_SDK_PERIPHERALS_LEDS_H_
#define IOT_SDK_PERIPHERALS_LEDS_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/


/*!
 * @addtogroup PERIPHERALS
 * @{
 */
/*!
 * @addtogroup LEDS
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
void encender_led_verde();
void apagar_led_verde();

void toggle_led_rojo();
/*!
 * @brief invierte estado del led rojo de tarjeta FRDM-K32L2B3
 *
 */

void toggle_led_rojo();
/*-----------------------------------------------------------------------------*/
/*!
 * @brief apaga led verde de tarjeta FRDM-K32L2B3
 *
 */

/** @} */ // end of X LEDS
/** @} */ // end of X PERIPHERALS

#endif /* IOT_SDK_PERIPHERALS_LEDS_H_ */
