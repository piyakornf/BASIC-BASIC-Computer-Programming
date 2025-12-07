#include <stdio.h>

#define VAT_RATE 0.07   



int main() {
    int N, i;
    float subtotal = 0.0;
    float totalVAT = 0.0;
    float grandTotal = 0.0;
    
    struct Item {
        char name[50];
        float unitPrice;
        int quantity;
    };

    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1;
    }

    struct Item items[N];

   
    for (i = 0; i < N; i++) {
        if (scanf("%s %f %d", items[i].name, &items[i].unitPrice, &items[i].quantity) != 3) {
            return 1;
        }
    }

    printf("\n--- RECEIPT ---\n");

    
    for (i = 0; i < N; i++) {
        float itemCost = items[i].unitPrice * items[i].quantity;
        subtotal += itemCost;

        printf("%s x %d = %.2f\n", items[i].name, items[i].quantity, itemCost);
    }

    
    totalVAT = subtotal * VAT_RATE;
    grandTotal = subtotal + totalVAT;

    printf("----------------------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("VAT (7%%): %.2f\n", totalVAT);
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}
