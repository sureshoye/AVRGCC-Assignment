//AVR GCC 
//Distributive Law

#include <avr/io.h>

#include <util/delay.h>

#include <stdbool.h>

int main (void)
{
bool A, B, X, Y, Z;


DDRB = 0b00000011;   // 8 and 9 pins as output

 while(1) 
 {
   X = 0b00000001;
 Y = 0b00000001;
 Z = 0b00000001;
    
A= X & (Y | Z);  // LHS of Distributive Law
B= (X&Y) | (X&Z);  // RHS of Distributive Law
  

PORTB |=(A<<0);  // LHS is given to Pin 8 and from there to LED1
PORTB |=(B<<1);  // RHS is given to Pin 9 and from there to LED2

}
return 0;

}
