#include "HCSR04_LIB.h"

void HCSR04_Init(void){
	DDR_HCSR04  |=  (1<<PIN_TRI);
	DDR_HCSR04  &= ~(1<<PIN_ECHO);
	PORT_HCSR04 &= ~(1<<PIN_TRI);
}
uint16_t HCSR04_get_distance(void){
	uint16_t distance=0;
	PORT_HCSR04 |=  (1<<PIN_TRI);
	_delay_us(10);
	PORT_HCSR04 &= ~(1<<PIN_TRI);
	
	while( getStatusECHO() == 0 );
	while( getStatusECHO() != 0 ){
		distance++;
		_delay_us(58);
	}
	return (distance);
	
}