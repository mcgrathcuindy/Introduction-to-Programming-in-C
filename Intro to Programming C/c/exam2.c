#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
   
  int i;
  int userNum = 0;
  int array[40] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39};
   
  printf("How far in the fibonacci sequence do you want to go?\n");
  scanf(" %d", &userNum);
   
  if(userNum == 0){
    printf("You chose zero! So no sequence shall be printed!\n");
    exit(0);
  }
   
  while((userNum < 1) || (userNum > 40)){
    scanf(" %d", &userNum);
  }

  

  for(i = 0; i < userNum ; ++i){
    if(i == 0){
      printf("0 ");
    }
    else if(i == 1){
      printf("1 ");
    }
    else if(i >= 2){
      array[i] = array[i -1] + array[i -2];
      printf("%d ", array[i]);
    }
  }
  printf("\n");
   
   
   
  return 0;
  }
