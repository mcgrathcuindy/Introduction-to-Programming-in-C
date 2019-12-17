/*
name: chris mcgrath
date: 10/18/2018
desc: arrays 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int userChoice = 0;
  int array[20];
  //int arr2[20] = {}
  //int arr3[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
  int i;
  int userInt = 0;
  double  sum = 0;
  double average = 0;
  int userPosition = 0;
  int userPositionNum = 0;
  char tempVal[20];
  int d;
  int userSearch = 0;
  int j = 0;
 
  printf("What do you want to do?\n");
  printf("1. All zeros\n");
  printf("2. increasing\n");
  printf("3. Random\n");
  printf("4. Average\n");
  printf("5. Change Value\n");
  printf("6. Flip\n");
  printf("7. Negate\n");
  printf("8. Search\n");
  printf("9. Exit\n");
 
  scanf("%d", &userChoice);

   while((userChoice < 1) || (userChoice > 9)){
    printf("Please Enter a valid option\n");
    scanf("%d", &userChoice);                                                                
  }
   if(userChoice == 9){
     printf("Thank you have a great day!\n");
   }
  
  while((userChoice >= 1) && (userChoice < 9)){
  if(userChoice ==1){
    for(i = 0; i < 20; ++i ){
      array[i] = 0;
      printf("%d,", array[i]);
    }printf("\n");
  }
   
  else if(userChoice == 2){
    printf("input integer\n");
    scanf("%d", &userInt);
    for(i = 0; i < 20; ++i){
      array[i] = userInt;
      
      printf("%d,", array[i]);
      userInt = userInt + 1;
    }printf("\n");
  }
  
  else if(userChoice == 3){
    for(i = 0; i < 20; ++i){
      array[i] = rand() % 101;
      printf("%d ", array[i]);
      
    }printf("\n");
  }

  else if(userChoice == 4){
    printf("The average is:");
    for(i = 0; i < 20; ++i){
      sum = sum + array[i];
	}
    average = sum / 20;
    printf("%lf\n", average);
  }

  else if(userChoice == 5){
    printf("Enter a position between 0 and 19\n");
    scanf("%d", &userPosition);
  
  while((userPosition < 0) || (userPosition > 19)){
	  printf("Please Enter a valid number\n");
	  scanf("%d", &userPosition);
  }   
      
      if((userPosition >= 0) && (userPosition <= 19)){
	printf("Enter number to input into position\n");
	scanf("%d", &userPositionNum);
	for(i = 0; i < 20; ++i){
	
	array[userPosition] = userPositionNum;
	
      
	printf("%d,", array[i]);
	}printf("\n");
      }
  }
  else if(userChoice == 6){
    printf("Reverse array is:\n");
    for(i = 19, d = 0; i >= 0; i--, d++){
      tempVal[d] = array[i];
    }
       for(i = 0; i < 20; i++){
	 array[i] = tempVal[i];
       }	 
	 for(i = 0; i < 20; i++){
	   printf("%d,", array[i]);
	 }printf("\n");
  }
  else if(userChoice == 7){
    for(i = 0; i < 20; ++i){
      array[i] = array[i] * (-1);
      printf("%d,", array[i]);
    }
    printf("\n");
  }
  else if(userChoice == 8){
    printf("Enter value\n");
    scanf("%d", &userSearch);
    for(i = 0; i < 20; ++i){
      if(array[i] == userSearch){
	j = j + 1;
      }
    }
    printf("%d occurs %d times\n", userSearch, j);
    j = 0;
  }
 
  printf("\nWhat do you want to do?\n");
  printf("1. All zeros\n");
  printf("2. increasing\n");
  printf("3. Random\n");
  printf("4. Average\n");
  printf("5. Change Value\n");
  printf("6. Flip\n");
  printf("7. Negate\n");
  printf("8. Search\n");
  printf("9. Exit\n");

  scanf("%d", &userChoice);    
  }

  return 0;
}
