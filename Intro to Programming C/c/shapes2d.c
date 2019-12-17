/* Name: Chris McGrath and Peyton Geyman
   Date: 9/13/18
   Lab 2 
*/

#include <stdio.h>
#include <math.h>

int main(void){

  
  float w1,l1,areaS,w2,l2,areaR,b1,h1,areaT;
  w1 = 0.0;
  l1 = 0.0;
  w2 = 0.0;
  l2 = 0.0;
  b1 = 0.0;
  h1 = 0.0;
  areaR = 0.0;
  areaS = 0.0;
  areaT = 0.0;

  printf("Enter the length and width of your square (2 values;l,w): \n");
  scanf("%f %f", &l1, &w1);
  printf("Enter the length and width of your rectangle (2 values;l,w): \n");
  scanf("%f %f", &l2, &w2);
  printf("Enter the base and height of your triangle (2 values;b,h): \n");
  scanf("%f %f", &b1, &h1);
  areaS = (l1 * w1);//area of the square is its length multiplied by its width
  areaR = (l2 * w2);//area of the rectangle is its length multiplied by its width
  areaT = ((b1 * h1)/2);// area of the triangle is its base multiplied by its height divided by 2
  printf(":area of square is %f\n", areaS);
  printf(":area of rectangle is %f\n", areaR);
  printf(":area of triangle is %f\n", areaT);

  return 0;
}

  
