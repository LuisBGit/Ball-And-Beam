#include <avr/io.h>
#include <avr/interrupt.h>
#include "SerialComms.h"


void UART_INIT (void)
{
	UBRRH = (BAUDRATE>>8);  //shift to right to force to 0
	UBRRL = BAUDRATE;  //Sets the baud rate
	UCSRB|= (1<<TXEN)|(1<<RXEN);  //Enable the RX and TX
	UCSRC|= (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1); //Sets the format to 8 bit
}

void UART_TRANSMIT (unsigned char data)
{
	while ((( UCSRA & (1<<UDRE)))==0); //wait for the register to clear
	UDR = data; //loads the data
} 

unsigned char UART_RECIEVE (void)
{
	while(((UCSRA) & (1<<RXC))==0); //waits for message to be fully received
	return UDR; //Returns the result
}