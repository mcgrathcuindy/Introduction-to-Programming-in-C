/*




*/

#include <stdio.h>

int main(void){
  int i = 0;
  double x, xi, xf, nMax, deltaX, area;

  area = 0.0;
  xi = 0.0;
  xf = 5.0;
  deltaX = 0.001;
  nMax = xf/deltaX;
  x = deltaX;

  for( i = 0; i < nMax; i++){
    area = area + x * deltaX;
    x = x + deltaX; 
  }

  printf("Area = %lf\n", area);

  return 0;
}
