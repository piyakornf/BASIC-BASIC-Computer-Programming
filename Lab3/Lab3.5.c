#include <stdio.h>

struct Purchase {
    int productCode;
    float price;
    int amount;
};

int main() {
    int totalItems, idx;
    float totalPerItem = 0.0;
    float totalAll = 0.0;
    float DELIVERY_FEE = 50.0;
    float promoCut = 0.0;

    if (scanf("%d", &totalItems) != 1) {
        return 1;
    }

    struct Purchase cart[totalItems];

    for (idx = 0; idx < totalItems; idx++) {

        if (scanf("%d %f %d", &cart[idx].productCode, &cart[idx].price, &cart[idx].amount) != 3) {
            return 1;
        }

        totalPerItem = (cart[idx].price * cart[idx].amount) + DELIVERY_FEE;

        if (totalPerItem >= 500.0) {
            promoCut = totalPerItem * 10 / 100;  // 10% discount
            totalPerItem -= promoCut;
        }

        totalAll += totalPerItem;
    }
    
    printf("Grand Total: %.2f\n", totalAll);

    return 0;
}