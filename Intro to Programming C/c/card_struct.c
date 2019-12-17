/*
  Name: Chris McGrath
  Date: November 28th, 2018
  Desc: Program that outputs a blackjack hand
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


  int i = 0;
  int size = 10000000;

typedef struct card_tt{
  int value;
  int suit;
} card_t;

void randomHand(card_t* a, card_t* b){
    a->value = (rand() % 13) +1;
    a->suit = (rand() % 4);
    b->value = (rand() % 13) +1;
    b->suit = (rand() % 4);
      while((b->value == a->value) && (b->suit == a->suit)){
      b->value = (rand() % 13) +1;
      b->suit = (rand() % 4);   
      }
}

void printProbOfBlackjack(card_t a, card_t b){

  double probBlackjack = 0;
  double tallyOfBlackjack = 0;
  
  
  for(i = 0; i < size; ++i){
    randomHand(&a,&b);
    if(((a.value == 1) && (b.value >= 10)) || ((a.value >= 10) && (b.value == 1))){
      tallyOfBlackjack++;
    }
  }

  
  probBlackjack = tallyOfBlackjack / size;
  
  printf("Probability of being dealt blackjack from a randomly produced hand is %lf\n", probBlackjack);
}

void printProbOfPairs(card_t a, card_t b){
  double tallyOfPairs = 0.0;
  double probPairs = 0.0;
  
  for(i = 0; i < size; ++i){
    randomHand(&a,&b);
    if(a.value == b.value){
      tallyOfPairs++;
    }
  }
    
    probPairs = tallyOfPairs/size;
    
    printf("Probability of being dealt pairs from a randomly produced hand is %lf\n", probPairs);
}

void printProbOfSequence(card_t a, card_t b){
  double tallyOfSequence = 0.0;
  double probSequence = 0.0;
    
  for(i = 0; i < size; ++i){
    randomHand(&a,&b);
    if((abs(a.value - b.value) == 1)){
      tallyOfSequence++;
    }
    else if(((a.value == 1) && (b.value == 13))||((a.value == 13)&&(b.value == 1))){
      tallyOfSequence++;
    }
  } 
   
   probSequence = tallyOfSequence / size;
   
   printf("Probability of being dealt sequential numbers from a randomly produced hand is %lf\n", probSequence);
  
}

void printCard(card_t c){
  printf("%d of", c.value);
  if( c.suit == 0){
    printf(" Diamonds\n");
  }else if( c.suit == 1){
    printf(" Hearts\n");
  }else if( c.suit == 2){
    printf(" Clubs\n");
  }else if( c.suit == 3){
    printf(" Spades\n");
  }else{
    printf("%d not known", c.suit);
  }
}

void printFaceCardValue(card_t c){
  if(c.value == 11){
    printf("Jack of");
  }
  else if(c.value == 12){
    printf("Queen of");
  }
  else if(c.value == 13){
    printf("King of");
  }
  else if(c.value == 1){
    printf("Ace of");
  }
}

void printFaceCardSuit(card_t c){
  if( c.suit == 0){
    printf(" Diamonds\n");
  }else if( c.suit == 1){
    printf(" Hearts\n");
  }else if( c.suit == 2){
    printf(" Clubs\n");
  }else if( c.suit == 3){
    printf(" Spades\n");
  }
}


int main(void){

  card_t a;
  card_t b;
  
  srand(time(NULL));
 
  randomHand(&a,&b);
 
  if((a.value < 11) && (a.value > 1)){
  printCard(a);
  }
  else if( a.value >= 11){
    printFaceCardValue(a);
    printFaceCardSuit(a);
  }
  else if(a.value == 1){
    printFaceCardValue(a);
    printFaceCardSuit(a);
  }
  
  while((b.value == a.value) && (b.suit == a.suit)){
    b.value = (rand() % 13) +1;
    b.suit = (rand() % 4);   
  }

  if((b.value < 11) && (b.value > 1)){                                                                                                                                                                                                              
    printCard(b);
  }
  else if( b.value >= 11){
    printFaceCardValue(b);
    printFaceCardSuit(b);
  }
  else if(b.value == 1){
    printFaceCardValue(b);
    printFaceCardSuit(b);
  }
  

  printProbOfBlackjack(a,b);
  
  printProbOfPairs(a,b);
    
  printProbOfSequence(a,b); 
   
    
  return 0;
}
