#include <stdio.h>
#include <stdlib.h>

int main(void){

  double y;
  double x;

  scanf("%lf", &x);
  srand(x);
  y = (double)rand()/RAND_MAX * 2* 3.14;
  printf("%lf\n", y );

  return 0;
  
}