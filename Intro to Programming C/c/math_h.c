/*


 */
#include <stdio.h>
#include <math.h>


int main (void){
  
  float x1,y1,x2,y2,gDistance;
  x1 = 0.0;

  printf("please input first point (2 values;x,y): \n");
  scanf("%f %f", &x1, &y1);
  printf("please input second point (2 values;x,y); \n");
  scanf("%f %f", &x2, &y2);
  
  gDistance= ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf ("distance between said points is: %f\n", sqrt(gDistance));
  
  
  return 0;
}
