/* 
name Chris McGrath
date 10-11-18
description lab 4
*/

#include <stdio.h>
#include <string.h>

int main(void){

  int userNum = 0;
  char SOS[10] = "...---...";
  char hLine = '*';
  int userNumLine = 0;
  int userNumSOS = 0;
  int userNumRange1 = 0;
  int userNumRange2 = 0;
  int i;

  printf("1. Horizontal Line\n");
  printf("2. SOS\n");
  printf("3. Range\n");
  printf("What would you like to do?\n");
  scanf("%d", &userNum);


  if(userNum == 1){
    printf("How wide?\n");
    scanf("%d", &userNumLine);
    while(userNumLine <= 0){
      printf("That number Doesn't make sense! Try again.\n");
      scanf("%d", &userNumLine);
    }
    while (userNum <= userNumLine){
      if(userNumLine > 0){
	printf("%c", hLine);
	userNum = userNum + 1;
      }
    }printf("\n");
  }


  if(userNum == 2){
    printf("How many?\n");
    scanf("%d", &userNumSOS);
    while(userNumSOS <= 0){                                                                                                                                                                                                                               printf("Negatives don't make sense! Try again.\n");
      scanf("%d", &userNumSOS);
    }
      for(i = 1; i <= userNumSOS; i++){
      printf("%s", SOS);
      printf(" ");
        while(userNumSOS <= 0){                                                                                                                                                                                                                             printf("Negatives don't make sense! Try again.\n");
	scanf("%d", &userNumSOS);
	}
      }
      printf("\n");
  }
     
  if(userNum == 3){
    printf("Enter two values:\n");
    scanf("%d", &userNumRange1);
    scanf("%d", &userNumRange2);
    for(;userNumRange1 == userNumRange2;){
      printf("Those numbers don't make sense. Try again\n");
      scanf("%d", &userNumRange1);
      scanf("%d", &userNumRange2);
    }
    if(userNumRange1 < userNumRange2){
      for(; userNumRange1 <= userNumRange2; userNumRange1++){
      printf("%d,", userNumRange1);
      }
      printf("\n");
    }
    else if(userNumRange2 < userNumRange1){
      for(userNumRange2 = userNumRange2; userNumRange2 <= userNumRange1; userNumRange2++){
      printf("%d,", userNumRange2);
      }
      printf("\n");
    }
  }
    return 0;
}
