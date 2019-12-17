/*




 */

#include <stdio.h>


int main(void){
  int i,j;
  i = 0;
  j = 0;
 
  for(j = 1; j <= 12; j++){

    for(i = 1; i <= 12; i++)

      printf("%i\t", i*j);
  
  printf("\n");
  }
  return 0;
}
