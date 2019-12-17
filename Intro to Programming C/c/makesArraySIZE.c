/*
name chris
date 10.8.2018
desc asks user for array size and makes the array
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

int SIZE = 0;
 int i=0;

printf("How many elements would you like your array to have?\n");
scanf("%i", &SIZE);

int myArr[SIZE];
myArr[0] = 0.0;

for(i = 0; i < SIZE; i++){
  myArr[i] =(double)i;
      printf("myArr[%lf] = %lf\n", i, myArr[i]);


}


return 0;
}
