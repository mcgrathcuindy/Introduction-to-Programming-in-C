/* Assignment: Lab 2
Name: Christopher McGrath
Email: mcgrathc@uindy.edu
Date: 9/20/18
Class: CSCI 155
desc: An interactive "mystory" */

#include <stdio.h>

int main(void){
  char  wordName[50];
  char  wordClothes[50];
  char  wordFavoriteBeach[50];
  char  wordFavoriteStore[50];
  char  numberBetween1and100[50];

  // Get user Input
  printf("Type input (< 50 char) without spaces.\n");
  printf("Enter the name of a friend of yours:\n");
  scanf("%s", wordName);
  
  printf("Enter your favorite article of clothing:\n");
  scanf("%s", wordClothes);

  printf("Enter the name of your favorite beach:\n");
  scanf("%s", wordFavoriteBeach);

  printf("Enter the name of your favorite clothing store:\n");
  scanf("%s", wordFavoriteStore);

  printf("Enter a number between 1 and 100:\n");//Now we have all the factors needed to tell our story
  scanf("%s", numberBetween1and100);

  //tell the story
  printf("%s", wordName);
  printf(" says %s are a must have", wordClothes);
  printf(" for %s.", wordFavoriteBeach);
  printf(" So, I went to my favorite store, %s,", wordFavoriteStore);
  printf(" and bought them for %s dollars ", numberBetween1and100);

  return 0;
}
