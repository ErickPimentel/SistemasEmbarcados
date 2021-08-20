#include <avr/io.h>
#include <util/delay.h>

int main(void) {	
	DDRB |= (1 << DDB5);
	DDRD &= ~(1 << DDD3);
}