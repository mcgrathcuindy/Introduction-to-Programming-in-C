#include <stdio.h>
#include <string.h>
int main(void){
  int i, j;
int c = 0;
char str[6] = "hello";
 i = 0;
 j = 0;

 printf("The string was %s\n", str);
 for(i = 0, j = strlen(str)-1; i < j; i++, j--){
   c = str[i];
   str[i] = str[j];
   str[j] = c;
 }
 //check to make sure that it works
 printf("The string is now %s\n", str);
 return 0;
}
