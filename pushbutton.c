#include "stm32f4xx.h"                  // Device header
int main(void)
{
	RCC->AHB1ENR |=0x4;
	RCC->AHB1ENR |=0x1;
	
	GPIOA->MODER |=0x400;
	
	while(1){
	
		if(GPIOC->IDR & 0x2000) //IF PC13 HIGH
		{ 
			GPIOA ->BSRR = 0x80; 
		
		}
		else{
	
			GPIOA ->BSRR = 0x800000;
	}
} 
}
