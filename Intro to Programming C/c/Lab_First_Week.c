#include <stdio.h>


 int main(void){

   char charFour, charThree, charTwo, charOne;
   int value;
   //value = 0;

   printf("Please enter a character:\n");

   value = scanf("%c %c %c %c", &charOne, &charTwo, &charThree, &charFour);
   printf("The character that you entered is: %c, %c, %c, and %c\n", charFour, charThree, charTwo, charOne);
   //printf("The value of scanf is %i \n", value);

   return 0;
 }
