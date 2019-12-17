#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"



void PrintItemCost(ItemToPurchase a){

  printf("%s %i @ $%i = $%i\n", a.itemName, a.itemQuantity, a.itemPrice, a.itemPrice * a.itemQuantity);

}


void MakeItemBlank(ItemToPurchase* a){

  strcpy((*a).itemName, "none");
  strcpy((*a).itemDescription, "none");
  (*a).itemPrice = 0;
  a->itemQuantity = 0;
}