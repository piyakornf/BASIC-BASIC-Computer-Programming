#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    if(scanf("%d", &N) != 1){
        return 1;
    }
    
    for(i = 0; i < N; i++){
        scanf("%f %d", &unitPrice, &quantity);
        
        itemCost = unitPrice * quantity;
        
        
        if(unitPrice >= 1000.0){
            itemCost = itemCost - (itemCost * 0.10);
        }
        
        grandTotal += itemCost;
    }
    
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}