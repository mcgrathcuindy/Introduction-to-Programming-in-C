#include <stdio.h>

int main(void){
  int number = 0;
	          
  printf("Give me a number: \n");
  
  scanf("%d", &number);
  
  //printf("2 * %f = %f\", number, 2 x number);
  number = number * 2;
  printf("The number you entered multiplied by 2 is: %d\n", number);

  if((number > 5) &&(number < 15)){
    printf("Your number is greater than 5 and less than 15\n");
  }
			         
  else if(number < 5){
    printf("Your number is less than 5\n");
  }
  else if(number > 15){
    printf("Your number is greater than 15\n");
  }
				             

  printf("Thanks! Have a good day!\n");

  return 0;
}
