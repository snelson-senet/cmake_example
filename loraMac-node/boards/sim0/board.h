#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <timer.h>
#include <delay.h>

#define HAL_Delay( ms )

void BoardInit();
/*!
* \brief Disable interrupts
*
* \remark IRQ nesting is managed
*/
void BoardDisableIrq( void );

/*!
 * \brief Enable interrupts
*
* \remark IRQ nesting is managed
*/
void BoardEnableIrq( void );

/*!
* \brief Initializes the target board peripherals.
*/
void BoardInitMcu( void );

/*!
* \brief Initializes the boards peripherals.
*/
void BoardInitPeriph( void );

/*!
* Possible power sources
*/
enum BoardPowerSources
{
  USB_POWER = 0,
  BATTERY_POWER,
};

/*!
241  * \brief Get the board power source
242  *
243  * \retval value  power source [0: USB_POWER, 1: BATTERY_POWER]
244  */
uint8_t GetBoardPowerSource( void );
