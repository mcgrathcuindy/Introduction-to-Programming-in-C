/*
chrs
11/19/2018
example of malloc code
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){

  int* ginormous;

  
  ginormous = (int*)malloc(sizeof(int)*100000000);
  ginormous[0] = 0;
  ginormous[99999999] = 1234;
  printf("ginormous[99999999] = %i \n", ginormous[99999999]);
  free(ginormous);
  
  return 0;
}
