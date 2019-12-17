#include <stdio.h>
#include <stdlib.h>


int main(void){

 int x = 0;

 //example code

 /*while(scanf("%i", &x) == 0){
   printf("Please enter an integer:\n");
 }




 

  //Solution 1: Simply close/exit the program 

  if(scanf("%i", &x) == 0){
    printf("The user input must be an integer. Exiting...\n");
    exit(1);
 
    }*/

  //Solution 2: Be patient and wait until a valid input
  while (scanf("%i", &x) == 0) {
    if(i >= 5){printf("SERIOUSLY, look up what the word \"integer\" means!!\n);}
    printf("Please enter an integer:\n");
    while(getchar() != '\n'){;} //clear the input buffer of invalid input
	  }

    printf("The number you CORRECTLY entered is %i \n", x);
  return 0;
 }
