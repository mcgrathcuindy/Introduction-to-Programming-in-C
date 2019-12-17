/*Chris
10.10.18
desc Fibonacci Sequence
*/

#include <string.h>
#include <stdio.h>

#define SIZE 45

int main(void){

 int i = 0;
 int myArr[SIZE] = {0, 1};
 myArr[0] = 0;
 myArr[1] = 1;

 printf("myArr[%i] = %i\n", 0, myArr[0]);
 printf("myArr[%i] = %i\n", 1, myArr[1]);
 for(i = 2; i<SIZE; i++){
   myArr[i] = myArr[i-1] + myArr[i-2];
   printf("myArr[%i] = %i\n", i, myArr[i]);

 }

 return 0;
}
