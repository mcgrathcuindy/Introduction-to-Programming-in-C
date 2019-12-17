/*
name chris
date 10/29/2018
*/

#include <stdio.h>

int add_2_numbers(int a, int b){

  int sum = 0;
  sum = a + b;

  return sum;
}

int main(void){

  int addition = 0;
  int a = 1;
  int b = 1;


  addition = add_2_numbers(a, b);


  printf("a + b = %i\n", addition);

  return 0;
}
