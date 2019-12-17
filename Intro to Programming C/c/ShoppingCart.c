#include <stdio.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

userCart AddItem(ItemToPurchase item, userCart cart){
  int i = 0;
  for(i = 0; i < 10; i++){
    if(strcmp(cart.cartItems[i].itemName, "none") == 0){
	cart.cartItems[i] = item;
	break;
      }
  }
  return cart;
}
void RemoveItem(char itemname[], userCart* cart){
  int i = 0;
  int j = 0;
  int k = 0;
  for(i = 0; i < 10; i++){
    if(strcmp(cart->cartItems[i].itemName, itemname) == 0){
      MakeItemBlank(&cart->cartItems[i]);
      k = 1;
      for(j = i; j < 10; j++){
	cart->cartItems[j] = cart->cartItems[j+1];
	if(j == 9){
	  MakeItemBlank(&cart->cartItems[j]);
	}
      }
      break;
    }
  }
  if(k == 0){
    printf("Item not found in cart. Nothing removed.\n");
  }
}

void ModifyItem(char itemname[], userCart* cart){
  int i = 0;
  int j = 30;
  int quantity = 0;
  for(i = 0; i < 10; i++){
    if(strcmp(cart->cartItems[i].itemName, itemname) == 0){
      j = i;
      break;
    }
  }
  printf("Enter the new quantity:\n");
  scanf("%i", &quantity);
  cart->cartItems[j].itemQuantity = quantity;
  if(j == 30){
    printf("Item not found in cart. Nothing modified.\n");
  }
}
int GetNumItemsInCart(userCart userCart){
  int i = 0;
  int quantity = 0;
  for(i = 0; i < 10; i++){
    quantity = quantity + userCart.cartItems[i].itemQuantity;
    if(strcmp(userCart.cartItems[i].itemName, "none") == 0){
      break;
    }
  }
  return quantity;
}
int GetCostOfCart(userCart cart){
  int i = 0;
  int total = 0;
  for(i = 0; i < 10; i++){
    total = total + (cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity);
  }
  return total;
}
void PrintTotal(userCart userCart){
  int i = 0;
  int total = 0;
  int quantity = 0;  

  printf("%s's Shopping Cart - %s\n", userCart.userName, userCart.currentDate);
  quantity = GetNumItemsInCart(userCart);
  printf("Number of Items: %i\n\n", quantity);
  for(i = 0; i < 10; i++){
    if(strcmp(userCart.cartItems[i].itemName, "none") == 0){
      break;
    }
    printf("%s %i ", userCart.cartItems[i].itemName, userCart.cartItems[i].itemQuantity);
    printf("@ $%i = $%i\n", userCart.cartItems[i].itemPrice, userCart.cartItems[i].itemPrice * userCart.cartItems[i].itemQuantity);
  }
  if(strcmp(userCart.cartItems[0].itemName, "none") == 0){
    printf("SHOPPING CART IS EMPTY\n");
    printf("\nTotal: $0\n");
  } else {
    
    for(i = 0; i < 10; i++){
      total = total + (userCart.cartItems[i].itemPrice * userCart.cartItems[i].itemQuantity);
    }
    printf("\nTotal: $%i\n", total);
  }
}
void PrintDescriptions(userCart* cart){
  int i = 0;
  
  printf("%s's Shopping Cart - %s\n\n", cart->userName, cart->currentDate);
  printf("Item Descriptions\n");
  for(i = 0; i < 10; i++){
    if(strcmp(cart->cartItems[i].itemName, "none") == 0){
      break;
    }
    printf("%s: %s\n", cart->cartItems[i].itemName, cart->cartItems[i].itemDescription);
  }
}

char PrintMenu(userCart* userCart){
  int j = 0;
  char name[50];//name for removing the item
  char userChar;
  userChar = 'p';  
  ItemToPurchase item;//item thats that is added

  printf("\nMENU\n");
  printf("a - Add item to cart\n");
  printf("r - Remove item from cart\n");
  printf("c - Change item quantity\n");
  printf("i - Output items' descriptions\n");
  printf("o - Output shopping cart\n");
  printf("q - Quit\n\n");
  
  while((userChar != 'a') && (userChar != 'r') && (userChar != 'c') && (userChar != 'i') && (userChar != 'o') && (userChar != 'q')){
   j++;
   while((j % 2) == 1){
    printf("Choose an option:\n");
    break;
   }
    scanf("%c", &userChar);
  }
  
  if(userChar == 'a'){
    printf("ADD ITEM TO CART\n");
    printf("Enter the item name:\n");
    getchar();
    fgets(item.itemName, 50000, stdin);
    item.itemName[strlen(item.itemName) - 1] = '\0';
    printf("Enter the item description:\n");
    fgets(item.itemDescription, 50, stdin);
    item.itemDescription[strlen(item.itemDescription) - 1] = '\0';
    printf("Enter the item price:\n");
    scanf("%i", &item.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%i", &item.itemQuantity);
    *userCart = AddItem(item, *userCart);
  } else if(userChar == 'r'){
    printf("REMOVE ITEM FROM CART\n");
    printf("Enter name of item to remove:\n");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';
    RemoveItem(name, userCart);
  
  } else if(userChar == 'c'){
    printf("CHANGE ITEM QUANTITY\n");
    printf("Enter the item name:\n");
    getchar();
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';
    ModifyItem(name, userCart);
  } else if(userChar == 'i'){
    printf("OUTPUT ITEMS' DESCRIPTIONS\n");
    PrintDescriptions(userCart);
  } else if(userChar == 'o'){
    printf("OUTPUT SHOPPING CART\n");
    PrintTotal(*userCart);
  }
  return userChar;
}
