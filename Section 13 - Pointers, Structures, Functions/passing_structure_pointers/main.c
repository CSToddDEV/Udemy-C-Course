/*
Author: Calvin Todd
Assignment: We are passing pointers to different functions to manipulate structures.
*/

#include <stdio.h>
#include <stdlib.h>

//Declare Structures
struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

//Declare Functions
void readItem(struct item *pItem);
void printItem(struct item *pItem);


int main()
{
    //Initialize variables
    struct item newItem;
    struct item *pNewItem;

    pNewItem = &newItem;

    readItem(pNewItem);
    printItem(pNewItem);

    return 0;
}

void readItem(struct item *pItem)
{
    //Read information in to structure
    pItem->itemName = (char*)malloc(45 * sizeof(char));
    printf("Please input the item's name: ");
    gets(pItem->itemName);
    printf("\nPlease input the item's quantity: ");
    scanf(" %d", &pItem->quantity);
    printf("\nPlease input the item's price: ");
    scanf(" %f", &pItem->price);
    pItem->amount = (float) pItem->price * pItem->quantity;

}

void printItem(struct item *pItem)
{
    //Print structure information
    printf("\n\nItem Name: %s\nItem Quantity: %d\nItem Price: %.2f\nItem Amount: %.2f", pItem->itemName, pItem->quantity, pItem->price, pItem->amount);

}
