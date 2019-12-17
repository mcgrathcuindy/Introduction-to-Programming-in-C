/*
Name Christopher Stanley
Date 10/17/2018
Desc: read a line from stdin and return length
 */



#include <stdio.h>
#include <string.h>



int main(void){

  int c,i;
  char s[100];

 
  printf("type a string:\n");
  scanf("%s", s);

  for (i = 0; s[i] != '\0'; /*&& (c=getchar() != EOF) && (c != '\n');*/ ++i);

    /*    if(s[i] != '\0'){ 
    
      c = c + 1;
    } 

    //s[i] = '\0';
    } */
    printf("length = %i\n", i);

    

  /*
  int j = strlen(s);
  printf("%d\n", j);
  */



  return 0;
}
