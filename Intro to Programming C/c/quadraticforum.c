/*
Name Chris
date 9/17/2018
desc find the quadratic roots of a polynomial
*/

#include <math.h>
#include <stdio.h>

 int main (void){
   //form: ax*x+bx+c = 0
   double x, a, b, c, d;//abc are the coefficients of the quadratic
   x = 0.0;
   a = 1.0;
   b = 4.0;
   c = 2.0;
   d = 0.0;
   x = 0.0;

   d = sqrt(b*b-4*a*c);

   x = (-b + d)/(2*a);
   
   printf("the + root is = %lf\n", x);
   
   x = (-b - d)/(2*a);
   printf("the - root is = %lf\n", x);

   printf(" square root (d) = %lf\n", d);

   






   return 0;
}
