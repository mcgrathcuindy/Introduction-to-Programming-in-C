/* 
Name: Chris McGrath
date: 11/1/18
desc: RPG lab 6
*/

#include <stdio.h>
#include <string.h>

//Function to decrement player health by 10
int healthDecrement(int lifePoints, int lifeTotal){
  int newLifeTotal = 0;
  int i;
  
  for(i = 0; i < 1; ++i){    //for loop number 1
    newLifeTotal = lifeTotal - lifePoints;
  }
  
  return newLifeTotal;
}
 
//Function to Increment player health by 10 
int healthIncrement(int lifePoints, int lifeTotal){
  int newLifeTotal = 0;
  int i;
 
  for(i = 0; i < 1; ++i){    //for loop number 2
    newLifeTotal = lifeTotal + lifePoints;
  }
  
  return newLifeTotal;
}

//Function to get rid of all of the player's money
int Bankruptcy(int moneyTotal){
  int newMoneyTotal = 0;

  newMoneyTotal = moneyTotal - moneyTotal;
   
  return newMoneyTotal;
}

//Function to print game ending evaluation for people who died
void printGameover(int moneyTotal, int lifeTotal){
  printf("Your bank account now contains: %d\n", moneyTotal);
  printf("Your lifepoints is now: %d\n",  lifeTotal);
  printf("Unfortunately you died.\nGame Over\n");
}

//function to thank user for playing
void printThanks(void){
  printf("\nThanks for playing!\n");
}

int main(void){
  int moneyTotal = 100;
  char characterName[50];
  int userDecision;
  int lifePoints = 10;
  int lifeTotal = 100;
  

  printf("Welcome to Chris McGrath's RPG!\n");

  printf("Give your character a one-word name with less than 50 characters(i.e. John)\n");
  scanf(" %s", characterName);
  
  if( strlen(characterName) < 50){
    printf("Your character's name is %s\n", characterName);
  }
  while(strlen(characterName) >= 50){     //While loop number 1
    printf("That name is too long!\n");
    printf("Try again.\n");
    scanf(" %s", characterName);
  }
  printf("\n");
  printf("%s your current bank account contains: $%d\n", characterName, moneyTotal);
  printf("Your great-grandpa just died, and he's left you $5000 in his will.\n");
  printf("Would you like to accept? (0 or 1)\n");
  scanf("%d", &userDecision);

  if(userDecision == 1){
   
    while(moneyTotal != 5100){    //while loop number 2
      moneyTotal = moneyTotal + 5000;
      printf("You've accepted the money! Your bank account now contains: $%d\n", moneyTotal);
    }
  }
  else if(userDecision == 0){
    printf("You've rejected the money. Your bank account now contains: $%d\n", moneyTotal);
  }
  printf("\n");
  printf("%s it's time to go to work!\n", characterName);
  printf("Would you like to go? (0 or 1)\n");
  scanf("%d", &userDecision);
  
  if(userDecision == 1){
    printf("You get in your car to drive to work.\n");
    printf("On your way to work you get t-boned by a semi-truck.\n");
    lifeTotal = healthDecrement(lifePoints,lifeTotal);      //function Call to decrement health from 100 to 90
    printf("You lose %d lifepoints. Your lifepoints is now: %d\n", lifePoints, lifeTotal);
  }
  else if(userDecision == 0){
    printf("You fall back asleep.\n");
    printf("As you lay in bed, a black widow spider bites you.\n");
    lifeTotal = lifeTotal - lifePoints;
    printf("You lose %d lifepoints. Your lifepoints is now: %d\n", lifePoints, lifeTotal);
  }
  printf("\n");
  printf("You wake up in the hospital.\n");
  printf("You're wearing scrubs, and your right arm hurts. You notice it's in a hardcast.\n");
  printf("Do you want to touch your arm?(0 or 1)\n");
  scanf("%d", &userDecision);

  if(userDecision == 1){
    printf("You gently caress your right arm, nothing happens.\n");
    printf("You fall back asleep.\n");
  }
  else if(userDecision == 0){
    printf("You don't do anything, nothing happens.\n");
    printf("You fall back asleep.\n");
  }
  printf("\n");
  printf("You wake up, a day has passed. The nurses tell you that your arm has healed.\n");
  printf("Then, the nurses tell you it's time to pay your hospital bill.\n");
  printf("They hand you the bill, it reads: %s is charged $%d for his stay.\n", characterName, moneyTotal);
  printf("Do you agree to pay the hospital bill?(0 or 1)\n");
  scanf("%d", &userDecision);

  if(userDecision == 1){
    printf("You pay your bill and peacefully exit the hospital.\n");
    lifeTotal = healthIncrement(lifePoints,lifeTotal);     //Function call to increment health from 90 to 100
    moneyTotal = Bankruptcy(moneyTotal);                   //Function call to get rid of all of the user's money
    printf("Your bank account now contains: %d\nYour lifepoints is now: %d\n", moneyTotal, lifeTotal);
  }
  else if(userDecision == 0){
    printf("You refuse to pay your bill.\nThings escalate.\nNext thing you know you're running down the hospital being chased by cops.\n");
    printf("The cops tell you to stop.\nYou keep running out the hospital door and into the street. People are watching.\n");
    printf("The cops are forced to shoot you for the safety of the community.\n");
    lifeTotal = lifeTotal - lifeTotal;
    
    printGameover(moneyTotal, lifeTotal);       //Function call to print game ending evaluation
 
  }

  
  printThanks();       //Function Call to thank user for playing this garbage game


  return 0;
}
