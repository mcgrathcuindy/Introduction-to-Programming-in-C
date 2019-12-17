#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H



typedef struct ItemToPurchase_struct {
  char itemName[50];
  int itemPrice;
  int itemQuantity;
  char itemDescription[50];

} ItemToPurchase;


void MakeItemBlank(ItemToPurchase* a);

void PrintItemCost(ItemToPurchase a);



#endif
