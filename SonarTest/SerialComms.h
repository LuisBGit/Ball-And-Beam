#ifndef SERIALCOMMS_H
#define SERIALCOMMS_H

/*Defines*/
#define F_CPU 1000000UL
#define BAUD 2400
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1)

/*Global Function Prototypes*/

void UART_INIT (void);
void UART_TRANSMIT (unsigned char data);
unsigned char UART_RECIEVE (void);
	
	
#endif 