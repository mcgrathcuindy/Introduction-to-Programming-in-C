/*
Chris McGrath
12/11/2018
Test review
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog_tt{
  char hideColor[10];
  char eyeColor[10];
}dog;

void printDog(dog* userDog1){
  printf("Enter your dog's fur color\n");
  scanf("%s", userDog1->hideColor);

  printf("Enter your dog's eye color\n");
  scanf("%s", userDog1->eyeColor);

  printf("Your dog has %s eyes and %s fur\n", userDog1->eyeColor, userDog1->hideColor);  
}

int main(void){

  dog userDog1;
  printDog(&userDog1); 

  return 0;
}
