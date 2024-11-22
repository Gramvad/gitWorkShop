/*
 * Name: EMB1 exam
 * Function:
 *
 * Created: 05-01-2024
 * 
 * Author : Andreas Gramvad Jensen
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>
#include <time.h>
#include "usart.h"
#include "i2cmaster.h"
#include "lcd.h"
#include "lm75.h"



int height[20];

void update_state(void);
void update_display(void);
void delay_ms(int d);


int main(void) {

// Setup of SDU Board, LCD
  i2c_init(); // Setup i2c comm
  LCD_init(); // Setup LDC, using printf
  lm75_init(); // Setup LM temperature sensor -> getTemp
  srand(time(NULL)); // Setup of random with a random seed, to ensure randomness.
  
  // Setup of serial monitor for PC programming 
  //uart_init(); // open the communication to the microcontroller
  //io_redirect(); // redirect input and output to the communication


  // Setup of the LED's
  DDRD = 0xFF; // I/0 board -> PD4-7 as outputs for LED's
  PORTD = 0x00; // Set output for LED's to off.

  // Setup of buttons
  DDRC  = 0xF0; // I/O board -> PC0-3 as input for buttons 
  PORTC = 0x3F; // Enable internal pullups at button pins PC0-3

  
  while(1) {;
  }
}

