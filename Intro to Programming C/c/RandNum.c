/* 



 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int y;
  int x;

  scanf("%d", &x);
  srand(x);
  y = (double)rand()/RAND_MAX * 149.0;
  printf("%i\n", y + 1);

  return 0;
}
