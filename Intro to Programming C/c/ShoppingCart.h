#include "ItemToPurchase.h"
#ifndef ShoppingCart_H
#define ShoppingCart_H



typedef struct userCart_struct {

  char userName[50];
  char currentDate[50];
  ItemToPurchase cartItems[10];
  int cartSize;

} userCart;

userCart AddItem(ItemToPurchase item, userCart cart);
void RemoveItem(char itemname[], userCart* cart);
void ModifyItem(char itemname[], userCart* cart);
int GetNumItemsInCart(userCart userCart);
int GetCostOfCart(userCart cart);
void PrintTotal(userCart userCart);
void PrintDescriptions(userCart* cart);
char PrintMenu(userCart* userCart);


#endif
