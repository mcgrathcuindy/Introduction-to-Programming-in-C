/* 
Name:
Date:
Desc:
*/

#include <stdio.h>

int main(void){

  int a, c;
  char b = 'z';
  a = 0;
  c = 0;

  printf("please enter what you want to tell me (Type ctrl+d when done):\n");
  //b = getchar();
  while( (b = getchar()) != EOF){//EOF is ctrl+d in linux
    a = a + 1;
    c = putchar(b);
    //b = getchar();
  }
    
  //printf("your character was %c\n", b);


  printf("you entered %i characters !\n", a);

 return 0;
}
