/*                                                                                                                       
                                                                                                                         
                                                                                                                         
                                                                                                                         
*/                                                                                                                       
                                                                                                                         
#include <stdio.h>                                                                                                       
                                                                                                                        
                                                                                                                         
 int main(void){                                                                                                         
                                                                                                                         
 #define SIZE 10                                                                                                       
 double sum, avg, max, min;                                                                                              
 int i = 0;                                                                                                              
 int arrSize = 10;                                                                                                       
 double myArr[SIZE] = {3.0, -2.0, 1.0, 0.0, 0.0, 1.0};                                                                
                                                                                                                         
 avg = 0.0;                                                                                                              
 sum = 0.0;                      
 max = 0.0;                                                                                                              
 min = 0.0;                                                                                                               
                                                                                                                         
 for(i = 0; i < SIZE; i++){                                                                                           
       sum = sum + myArr[i];                                                                                             
                                                                                                                         
}                                                                                                                        
                                                                                                                         
 printf("sum = %lf\n", sum);
 printf("avg = %lf\n", sum/SIZE);

 max = myArr[0];
 for(i = 0; i < SIZE; i++){
   if(max < myArr[i]){
     max = myArr[i];
   }
 }
   printf("Max element in the array is %lf\n", max);
   
 min = myArr[0];
   for(i = 0; i < SIZE; i++){
     if(min > myArr[i]){
       min = myArr[i];
     }
   }
   printf("Min element in array is %lf\n", min);

   return 0;
 }
