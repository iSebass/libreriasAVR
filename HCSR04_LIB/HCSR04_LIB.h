/*
 * HCSR04.h
 *
 * Created: 20/04/2023 7:38:03 a. m.
 *  Author: iProf
 */ 


#ifndef HCSR04_LIB_H_
#define HCSR04_LIB_H_

#define F_CPU 16000000UL
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>

#define DDR_HCSR04			DDRB
#define PIN_HCSR04			PINB
#define PORT_HCSR04			PORTB
#define PIN_ECHO			1
#define PIN_TRI				0
#define getStatusECHO()     (PIN_HCSR04 & (1<<PIN_ECHO))		

#define ERROR_TIME_OUT     0
#define SUCCES_PROCESS     1

void HCSR04_Init(void);
uint16_t HCSR04_get_distance(void);



#endif /* HCSR04_H_ */