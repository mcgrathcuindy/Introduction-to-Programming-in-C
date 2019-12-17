/* 
name chris mcgrath
date 9/30/2018
desc removes all the a's from a string
*/ 

#include <stdio.h>
#include <string.h>


int main(void){

  int i = 0;

  char myStr[10] = "abcdeadfc";
  char otherStr[10];
  otherStr[0] = 'z';


  for(i = 0; i < strlen(myStr); i++){
    if(myStr[i] == 'a'){
      continue;}

    otherStr[i] = myStr[i];
    //printf("otherStr[i] = %c   ", i, otherStr[i]));
    //printf("myStr[%i] = %c\n", i, myStr[i]));
  }


    printf("otherStr = %s\n", otherStr);
    printf("myStr = %s\n", myStr);


  return 0;
}
