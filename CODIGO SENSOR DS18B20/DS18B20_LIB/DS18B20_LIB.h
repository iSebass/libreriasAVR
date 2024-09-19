
#ifndef DS18B20_LIB_H_
#define DS18B20_LIB_H_


#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

//DEFINIR EL PUERTO Y EL PIN DEL SENSOR
#define DS18B20_PORT  PORTB
#define DS18B20_DDR   DDRB
#define DS18B20_PIN   PINB
#define DS18B20_DQ    PINB0

//DEFINIRMOS LOS PROTOTIPOS DE FUNCION

void ds18b20_init(void);
void ds18b20_write(uint8_t byte);
uint8_t ds18b20_read(void);
float ds18b20_get_temp(void);


#endif /* DS18B20_LIB_H_ */