#define FREQ 1600000UL
#include <avr/io.h>
#include <util/delay.h>

ISR(INT0_vect) {
	PORTC ^= 0b00100000;
}
int main(void){
	DDRD = 0x00;
	PORTD = 0xFF;
	DDRC = 0b00100000; 
	EICRA = 0b00000010;
	EIMSK = 0b00000001;
	sei();
	while(1){
	}
}