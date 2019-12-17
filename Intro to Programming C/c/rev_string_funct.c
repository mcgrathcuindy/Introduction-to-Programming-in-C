/*
name chris mcgrath
date 10/29/2018
desc reverse order of string
 */



#include <stdio.h>
#include <string.h>

#define SIZE 10

//reverses the order of the string input
void rev_string(char s[]){
  int i, j;
  char c;
  j = 0;
  i = 0;


  for(i = 0, (j = strlen(s)-1); i < j; i++, j--){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}


int main(void){

  char s[SIZE] = "my_string";
  
  printf("Your string is %s\n", s);
  rev_string(s);
  printf("Your reverse string is %s\n", s);


  return 0;
}
