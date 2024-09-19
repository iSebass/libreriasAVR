#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "LCD/LCD_LIB.h"
#include "DS18B20_LIB/DS18B20_LIB.h"


float temp;

int main(void)
{
    lcd_init();
	lcd_disable_blink();
	lcd_disable_cursor();
	
	ds18b20_init();
	
    while (1) 
    {
		temp = ds18b20_get_temp();
		
		lcd_set_cursor(1,1);
		lcd_printf("Temp: %5.1f", temp);
		
		_delay_ms(50);
    }
}

