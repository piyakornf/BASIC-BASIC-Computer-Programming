#include <stdio.h>

struct PurchasedItem {
    char productName[50];
    float itemUnitPrice;
    int purchasedQuantity;
};

int main() {
    
    int numberOfItems, loopIndex;

    
    float lineItemCost;
    float runningSubtotal = 0.0;
    float calculatedTotalVAT = 0.0;
    float finalGrandTotal = 0.0;

    
    const float VAT_PERCENTAGE_RATE = 0.07;
    
   
    if (scanf("%d", &numberOfItems) != 1) {
        return 1; 
    }

    
    struct PurchasedItem allItemsData[numberOfItems];

    printf("---RECEIPT ---\n");
    
    
    for (loopIndex = 0; loopIndex < numberOfItems; loopIndex++) {
        
        if (scanf("%s %f %d", allItemsData[loopIndex].productName, 
                              &allItemsData[loopIndex].itemUnitPrice, 
                              &allItemsData[loopIndex].purchasedQuantity) != 3) {
            return 1; 
        }

        
        lineItemCost = allItemsData[loopIndex].itemUnitPrice * allItemsData[loopIndex].purchasedQuantity;

        
        printf("%s x %d = %.2f\n", allItemsData[loopIndex].productName, allItemsData[loopIndex].purchasedQuantity, lineItemCost);
        
        
        runningSubtotal += lineItemCost;
    }

   
    calculatedTotalVAT = runningSubtotal * VAT_PERCENTAGE_RATE;
    finalGrandTotal = runningSubtotal + calculatedTotalVAT;


    printf("------------\n");
    printf("Subtotal: %.2f\n", runningSubtotal);
    printf("VAT (7%%): %.2f\n", calculatedTotalVAT);
    printf("Grand Total: %.2f\n", finalGrandTotal);

    return 0;
}