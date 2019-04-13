/*
 * SonarTest.c
 *
 * Created: 13/04/2019 12:45:39 PM
 * Author : lborj
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include "SerialComms.h"

int main(void)
{
    UART_INIT();
    while (1) 
    {
		_delay_ms(1000);
    }
}

