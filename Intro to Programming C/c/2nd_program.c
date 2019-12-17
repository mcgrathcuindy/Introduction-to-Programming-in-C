#include <stdio.h>


int main(void){

  char charOne;
  int value;

  printf("Please enter a character:\n");
  value = scanf("%c", &charOne);
  printf("The character that you entered is:%c \n", charOne);
  printf("The value of scanf is %i \n",value);

  return 0;
}
