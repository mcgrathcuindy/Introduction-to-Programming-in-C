/*
Name: Chris McGrath
date 10.8.2018
desc trying to write 12 times table
*/

#include <stdio.h>

int main(void){

int i;
int j;

for(i = 1; i <= 11; i++){
      
      for( j = 1; j <= 11; j++)
      
      printf(" %i\t", i*j);
      
      printf("\n");
}

return 0;
}
