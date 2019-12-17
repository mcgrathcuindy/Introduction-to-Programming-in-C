/*
Name: Chris
Date: 10/31/2018
desc: function that calculates average of array
*/

#include <stdio.h>


double arrAverage(double userArr[], int SIZE){
  int i;
  double sum = 0.0;
  double average = 0.0;

  for(i = 0; i < SIZE; ++i){
    sum = sum + userArr[i];
  }
  
  average = sum / SIZE;
  return average;
}

int main(void){
  int SIZE = 0;
  double userArr[SIZE]; 
  int i;
  double average = 0.0;

  printf("How many values would you like to enter?\n");
  scanf(" %d", &SIZE);

  printf("Enter array of values\n");

  for( i = 0; i < SIZE; ++i){
    scanf(" %lf", &userArr[i]);
  }

  average = arrAverage(userArr, SIZE);
  printf("%lf\n", average);






  return 0;
}
