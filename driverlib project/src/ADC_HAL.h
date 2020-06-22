// File:  ADC_HAL.h
// Author: JS
// Date:  9/14/17
// Purpose: ADC utilities
// Hardware:  TM4C123 Tiva board

#ifndef ADC_HAL_H
#define ADC_HAL_H

typedef enum {
	AIN0 = 0,
	AIN1 = 1,
	AIN2 = 2,
	AIN3 = 3,
	AIN4 = 4,
	AIN5 = 5,
	AIN6 = 6,
	AIN7 = 7,
	AIN8 = 8,
	AIN9 = 9,
	AIN10 = 10,
	AIN11 = 11
} ADCChannel;


typedef enum {
	ADC0 = 0,
	ADC1 = 1
} ADCModule;


void ADC_Enable(ADCModule module, ADCChannel channel);
uint32_t ADC_Sample(ADCModule module);

#endif


