/*
name chris
date 10/8/2018
desc shows different options to declare arrays
*/
#include <stdio.h>

int main(void){
//1st option
  double myArr[10];
  myArr[0] = 0.0; //sets all other elements to 0


//second option
//Does not work with character arrays
  double myArr2[10] = {};//empty array
  
//third option
  double myArr3[] = {1.0, 2.1, 3.4, 5.6};//auto-sizes array to fit initialized elements
//myarr3 has 4 elements

  int myArr4[10]; //type of each element is int
  myArr4[0] = 1;

  float myArr5[20];
  myArr5[0] = 0;

return 0;
}
