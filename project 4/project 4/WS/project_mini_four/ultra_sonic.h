/*
 * ultra_sonic.h
 *
 *  Created on: Oct 21, 2021
 *      Author: Mahmoud EL-Asmar
 */

#ifndef ULTRA_SONIC_H_
#define ULTRA_SONIC_H_

#include "std_types.h"

#define TRIGGER_PORT_ID	PORTC_ID
#define TRIGGER_PIN_ID	PIN4_ID

void Ultrasonic_init(void);
void Ultrasonic_Trigger(void);
uint16 Ultrasonic_readDistance(void);
void Ultrasonic_edgeProcessing(void);



#endif /* ULTRA_SONIC_H_ */
