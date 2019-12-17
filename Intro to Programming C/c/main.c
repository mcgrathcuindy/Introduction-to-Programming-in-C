#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

int main(void){
  char name[50];
  int i = 0;
  char userChar;//the character to navigate the menu
  userCart userCart;
  for(i = 0; i < 10; i++){
    MakeItemBlank(&userCart.cartItems[i]);
  }

  printf("Enter Customer's Name:\n");
  fgets(userCart.userName, 50, stdin);
  userCart.userName[strlen(userCart.userName) - 1] = '\0';

  printf("Enter Today's Date:\n");
  fgets(userCart.currentDate, 50, stdin);
  userCart.currentDate[strlen(userCart.currentDate) - 1] = '\0';

  printf("\nCustomer Name: %s\n", userCart.userName);
  printf("Today's Date: %s\n", userCart.currentDate);

  while(userChar != 'q'){
    userChar = PrintMenu(&userCart);
    if(userChar == 'r'){
      printf("REMOVE ITEM FROM CART\n");
      printf("Enter name of item to remove:\n");
      getchar();
      fgets(name, 50, stdin);
      name[strlen(name) - 1] = '\0';
      RemoveItem(name, &userCart); 
    }
    if(userChar != 'r'){
      getchar();
    }
  }
  
  return 0;
}
