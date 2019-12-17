#include <stdio.h>
#include <stdlib.h>

int main(void){

  int x;
  x = 0;
  double y;
  y = 0.0;

  x = rand();
  printf("x = %i\n", x);
  x = rand();
  printf("x = %i\n", x);

  printf("maximum random number is %i\n", RAND_MAX);

  //what if i want a psuedo-random number between 0 and 100?
  x = (double)rand()/(double)RAND_MAX*100;
  printf("random number between 0 and 100 is %lf\n", y);

  return 0;
}
