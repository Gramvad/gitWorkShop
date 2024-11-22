/*
 * Name:
 * Function:
 *
 * Created: 
 * 
 * Author : Andreas Gramvad Jensen
 */ 

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include "usart.h"

int main(void) {    

  uart_init(); // open the communication to the microcontroller
  io_redirect(); // redirect input and output to the communication

}
