/*
Name: Christopher McGrath
Date: 10/31/18
Desc:
*/

#include <stdio.h>

char PrintUserDefinedChar(char userChar, int numberOfTimes){
  int i;

  for(i = 0; i < numberOfTimes; ++i){
    printf("%c", userChar);
  }
  printf("\n");
}

int main(void){

  char userChar;
  int numberOfTimes = 0;
  
  printf("Enter Character\n");
  scanf(" %c", &userChar);
  printf("Enter number of times\n");
  scanf("%d", &numberOfTimes);

  PrintUserDefinedChar(userChar, numberOfTimes);




  return 0;
}
