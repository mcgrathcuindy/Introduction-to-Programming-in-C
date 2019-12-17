#include <stdio.h>

int main(void) {

  int pJersey[5] = {0,0,0,0,0};
  int pNumber[5] = {0,0,0,0,0};
   int i;
   char userChar;
   int userJerseyNumber = 0;
   int userRatingNumber = 0;
   int userJerseyNumber2 = 0;
   int userRatingNumber2 = 0;
   
   printf("Enter player 1's jersey number:\n");
   scanf("%d", &pJersey[0]);
   printf("Enter player 1's rating:\n");
   scanf("%d", &pNumber[0]);
   printf("\n");
   
   printf("Enter player 2's jersey number:\n");
   scanf("%d", &pJersey[1]);
   printf("Enter player 2's rating:\n");
   scanf("%d", &pNumber[1]);
   printf("\n");
   
   printf("Enter player 3's jersey number:\n");
   scanf("%d", &pJersey[2]);
   printf("Enter player 3's rating:\n");
   scanf("%d", &pNumber[2]);
   printf("\n");
   
   printf("Enter player 4's jersey number:\n");
   scanf("%d", &pJersey[3]);
   printf("Enter player 4's rating:\n");
   scanf("%d", &pNumber[3]);
   printf("\n");
   
   printf("Enter player 5's jersey number:\n");
   scanf("%d", &pJersey[4]);
   printf("Enter player 5's rating:\n");
   scanf("%d", &pNumber[4]);
   printf("\n");
   
   printf("MENU\n");
   printf("u - Update player rating\n");
   printf("a - Output players above a rating\n");
   printf("r - Replace player\n");
   printf("o - Output roster\n");
   printf("q - Quit\n");

   printf("Choose an option:\n");
   
   
   scanf(" %c", &userChar);
   
   if(userChar == 'q'){
   }
   
   
   while((userChar != 'q')){
     
     
     
      if(userChar == 'u'){
         printf("Enter a jersey number:\n");
         scanf("%d", &userJerseyNumber);
         printf("Enter a new rating for player:\n");
         scanf("%d", &userRatingNumber);
         for(i = 1; i <= 5; ++i){
            if(pJersey[i-1] == userJerseyNumber){
               pNumber[i-1] = userRatingNumber;
            }
         }
      }
      
      else if(userChar == 'a'){
         printf("Enter a rating:\n");
         scanf("%d", &userRatingNumber);
         printf("ABOVE %d\n", userRatingNumber);
         for(i = 1; i <= 5; ++i){
            if(pNumber[i-1] > userRatingNumber){
               printf("Player %d -- Jersey number: %d, Rating: %d\n", i, pJersey[i-1], pNumber[i-1]);
            }
         }
      }
      
      else if(userChar == 'r'){
         printf("Enter a jersey number:\n");
         scanf("%d", &userJerseyNumber);
         for(i = 1; i <= 5; ++i){
            if(pJersey[i-1] == userJerseyNumber){
               printf("Enter a new jersey number:\n");
               scanf("%d", &userJerseyNumber2);
               printf("Enter a rating for the new player:\n");
               scanf("%d", &userRatingNumber2);
               pJersey[i-1] = userJerseyNumber2;
               pNumber[i-1] = userRatingNumber2;
            }
         }
      }
      
      else if(userChar == 'o'){
	printf("ROSTER\n");
         for(i = 1; i <= 5; ++i){
         printf("Player %d -- Jersey number: %d, Rating: %d\n", i, pJersey[i-1], pNumber[i-1]);
         }
      }      
   
	printf("\nMENU\n");
	printf("u - Update player rating\n");
	printf("a - Output players above a rating\n");
	printf("r - Replace player\n");
	printf("o - Output roster\n");
	printf("q - Quit\n\n");
      
	printf("Choose an option:\n");
	scanf(" %c", &userChar);
      
   }
   
   

   
   return 0;
}
