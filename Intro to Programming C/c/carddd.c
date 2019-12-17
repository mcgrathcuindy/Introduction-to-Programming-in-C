#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define HANDS 1000000//may need up to 1 billion, recommend the number for testing
 //see definition below

typedef struct card_struct{
  int value;
  int suit;
} card;

void test_blackjack(card a, card b, double* blk_jk){
  int i = 0;
  for(i = 0; i < HANDS; ++i){
    if(((a.value == 1) && (b.value >= 10)) || ((b.value == 1) && (a.value >= 10))){
      blk_jk++;
    }
  }  
}

void test_pairs(card a, card b, double* pairs){
  int i = 0;
  for(i = 0; i < HANDS; ++i){
    if(a.value == b.value){
      pairs++;
    }
  }  
}

void test_seq(card a, card b, double* seq){
  int i = 0;
  for(i = 0; i < HANDS; ++i){
    if((a.value - b.value)==abs(1)){
      seq++;
    }
  }
}

void generate_cards(card* a, card* b){
  srand(time(NULL));
  a->value = (rand() % 13) +1;
  a->suit = (rand() % 4);
  b->value = (rand() % 13) +1;
  b->suit = (rand() % 4);
  
  //make sure you don't get the same card twice!                                                                                             
  while((a->value == b->value) && (a->suit == b->suit)){
    a->value = (rand() % 13) +1;
    a->suit = (rand() % 4); 
  }
}



int main(void){

  card a, b;
  int j = 0;
   
  double blk_jk = 0;//counts number of blackjacks
  double pairs = 0;//counts number of pairs
  double seq = 0;//counts number of hands with sequential cards
  a.value = 0;
  a.suit = 0;
  b.value = 0;
  b.suit = 0;

  for(j = 0; j< HANDS; j++){
    generate_cards(&a,&b);
    test_blackjack(a,b,&blk_jk);
    test_pairs(a,b,&pairs);
    test_seq(a,b,&seq);
  }
  double probBlk_jk = 0.0; 
  double probPairs = 0.0;
  double probSeq = 0.0;
  
  probBlk_jk = blk_jk / HANDS;
  probPairs = pairs / HANDS;
  probSeq = seq / HANDS;
  //remember how integer division works
  printf("The probability of blackjack is %lf\n", probBlk_jk);
  printf("The probability of getting a pair is %lf\n", probPairs);
  printf("The probability of getting sequential cards is %lf\n", probSeq);
  return 0;
}

/*
void print_card(card a){
  if(a.value == 1){
    printf("Ace");
  }else if(a.value == 11){
    printf("Jack");
  }else if(a.value == 12){
    printf("Queen");
  }else if(a.value == 13){
    printf("King");
  }else{
    printf("%d", a.value);
  }
  printf(" of ");
  if(a.suit == 0){
    printf("Clubs");
  }else if(a.suit == 1){
    printf("Diamonds");
  }else if(a.suit == 2){
    printf("Spades");
  }else if(a.suit == 3){
    printf("Hearts");
  }else{
    printf("%d not a suit", a.suit);
  }
  printf("\n");
}
*/
