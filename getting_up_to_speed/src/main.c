/*
******************************************************************************
File:     main.c
Info:     Generated by Atollic TrueSTUDIO(R) 9.3.0   2020-10-26

The MIT License (MIT)
Copyright (c) 2019 STMicroelectronics

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

******************************************************************************
*/

/* Includes */
#include "stm32f0xx.h"
#include "sonar.h"
#include <stdint.h>
#include <string.h>
/* Private macro */
/* Private variables */
const int32_t length = 11;
/* Private function prototypes */
/* Private functions */
void Classify(float values[11]);
/**
**===========================================================================
**
**  Abstract: main program
**
**===========================================================================
*/
int main(void)
{
  uint32_t i = 0;
  //setup gpio
  	//========================
  	// enable clock for push-buttons
  	 RCC->AHBENR |= RCC_AHBENR_GPIOBEN;
  	// set pins B0-B7, B10-B11 to GPIO outputs, GPIOB_MODERx = 01
  	 GPIOB->MODER |= (GPIO_MODER_MODER0_0|GPIO_MODER_MODER1_0| GPIO_MODER_MODER2_0|GPIO_MODER_MODER3_0|GPIO_MODER_MODER4_0| GPIO_MODER_MODER5_0|GPIO_MODER_MODER6_0|GPIO_MODER_MODER7_0| GPIO_MODER_MODER10_0| GPIO_MODER_MODER11_0);
  	 // load a bit pattern to entire output register, GPIOB_ODR
  	 GPIOB->ODR = 0;
  	 //===============================
  //setup clock
  	RCC->APB1ENR |= RCC_APB1ENR_TIM14EN;
  	TIM14->PSC = 756;
  	TIM14->ARR = 65306;
  	//start counting
  	TIM14->CR1|=  TIM_CR1_CEN;


  	float values[11] = {1,1,26,0,0,0,0,0,0,3,0.044989999999999995};//A
  	  Classify(values);


  	  memcpy(values, (float[]){0.0,0.0,3.0,1.0,0.0,0.0,1.0,42.0,0.0,0.0,0.07378},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){0.0,0.0,8.0,1.0,0.0,0.0,1.0,120.0,0.0,0.0,0.20961},11);//A
  	  Classify(values);



  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);



  	  memcpy(values, (float[]){1,1,26,0,0,0,0,0,0,3,0.044989999999999995},11);//A
  	   Classify(values);





  	  memcpy(values, (float[]){0.0,0.0,4.0,1.0,0.0,0.0,1.0,22.0,0.0,0.0,0.04189},11);//N
  	  Classify(values);

//TIM14->CR1 &= ~TIM_CR1_CEN;

  	int time= TIM14->CNT;
  /* Infinite loop */
  while (1)
  {
	i++;
  }
}


void Classify(float values[11]){
	const int predicted_class = sonar_predict(values, length); // 0=A 1=N

	  if (predicted_class==1){
		  //turn on LED1

		  GPIOB->ODR =0b0000000000000001;

	  }
	  else{
		  GPIOB->ODR =0b0000000000000010;
	  }
}
