/*
Chris McGrath
12/12
final exam
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double min(double array[], int n){
  int i = 0;
  double t;

  for(i = 0; i <= n; i++){
    if(array[i] < array[i+1]){
      t = array[i];
    }
   
  }
    return t;
}


double max(double array[], int n){
  int i = 0;
  double u = 0.0;

  for(i=0; i < n; i++){
      if(array[i] > array[i+1]){
	u = array[i];
    }
  }
    return u;
}

  
double average(double array[], int n){
  int i = 0;
  double a = 0.0;
  double b = 0.0;
  for(i = 0; i < n; i++){
    b = b + array[i];
  }
  a = b / n;
  return a;
}


int main(void){

  char str[15];
  double ret_value = 0.0;
  int n = 0;
  int i = 0;

  printf("How Large would you like the array to be?\n");
  scanf("%i", &n);
  double  array[n];

  printf("Please fill the array with the appropriate number of double type values:\n");
  for(i = 0; i < n; i++){
    scanf("%lf", &array[i]);
  }      
  
  
  printf("Please enter which function you'd like to use (min, max, or average):\n");
  scanf(" %s", str);
  
  while(strcmp(str, "quit")!=0){

    if(strcmp(str, "min")==0){
      ret_value = min(array, n);
    }
    else if(strcmp(str,"max")==0){
      ret_value = max(array, n);
    }
    else if(strcmp(str,"average")==0){
      ret_value = average(array, n);
    }
    else if(strcmp(str,"quit")==0){
      exit(1);
    }
    else{
      printf("error, exiting...\n");
      exit(1);
    }

    printf("The %s value of the array is %lf\n", str, ret_value);
    printf("Please enter which function you'd like to use (min, max, or average):\n");
    scanf(" %s", str);
  }

  return 0;
}
