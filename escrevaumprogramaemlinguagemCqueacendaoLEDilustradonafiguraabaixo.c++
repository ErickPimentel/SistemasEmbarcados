#include <avr/io.h>
#include <util/delay.h>

int main(void) {	
	DDRB |= (1 << DDB5);
	while (1) {
		PORTB |= (1 << PINB5);
	}
}