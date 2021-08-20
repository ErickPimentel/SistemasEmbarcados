#include <avr/io.h>
#include <util/delay.h>

int main(void) {	
	DDRD &= ~(1 << DDD3);
	while (1) {
		bool estado = (PIND & (1 << DDD3));
	}
}