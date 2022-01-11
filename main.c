#include "stm32f10x.h"

void delayMs(int delay);
int main(void)
{
	RCC->APB2ENR |= 0x10;
             // Keil::Device:StdPeriph Drivers:GPIO
	GPIOC->CRH |= 0x100000;
	while(1){
	GPIOC->ODR = 0x2000;
		delayMs(500);
	GPIOC->ODR &=~ 0x2000;
	delayMs(500);
}

}
void delayMs(int delay){
int i;
	for(; delay>0; delay--){
		for(i = 0; i<3195; i++);
	}

}
