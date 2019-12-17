#include <stdio.h>
#include <string.h>

int main(void){

  int i;
  char s[100];


  printf("Please enter a string:\n");
  scanf("%[^\n]s", s);

  for(i = 0; s[i] != '\0'; ++i);

  printf("Length of String is %i\n", i);

  return 0;
}
    
