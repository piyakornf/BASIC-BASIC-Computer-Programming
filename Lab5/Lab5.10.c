#include <stdio.h>

// Calculate change amount
int getChangeAmount(int price, int payment) {
    if (payment >= price) {
        return payment - price;
    } else {
        return -1;
    }
}

// Count each denomination
int getDenominationCount(int *remaining, int denom) {
    int count = *remaining / denom;
    *remaining = *remaining % denom;
    return count;
}

int main() {
    int priceTotal, paymentAmount, changeTotal, changeLeft;
    int bill1000, bill500, bill100, bill50, bill20, coin10, coin5, coin2, coin1;

    printf("Enter Total Cost (integer): ");
    scanf("%d", &priceTotal);

    printf("Enter Amount Paid (integer): ");
    scanf("%d", &paymentAmount);

    changeTotal = getChangeAmount(priceTotal, paymentAmount);

    if (changeTotal == -1) {
        printf("Change Amount: -1\n");
        printf("\nERROR: Payment is less than Total Cost.\n");
        return 1;
    }

    changeLeft = changeTotal;

    bill1000 = getDenominationCount(&changeLeft, 1000);
    bill500 = getDenominationCount(&changeLeft, 500);
    bill100 = getDenominationCount(&changeLeft, 100);
    bill50 = getDenominationCount(&changeLeft, 50);
    bill20 = getDenominationCount(&changeLeft, 20);
    coin10 = getDenominationCount(&changeLeft, 10);
    coin5 = getDenominationCount(&changeLeft, 5);
    coin2 = getDenominationCount(&changeLeft, 2);
    coin1 = getDenominationCount(&changeLeft, 1);

    printf("\n--- CHANGE CALCULATION REPORT ---\n");
    printf("Total Cost: %d\n", priceTotal);
    printf("Amount Paid: %d\n", paymentAmount);
    printf("Change Amount: %d\n", changeTotal);

    printf("\nDenomination Breakdown:\n");

    if (bill1000 > 0) printf("1000 Baht: %d\n", bill1000);
    if (bill500 > 0) printf("500 Baht: %d\n", bill500);
    if (bill100 > 0) printf("100 Baht: %d\n", bill100);
    if (bill50 > 0) printf("50 Baht: %d\n", bill50);
    if (bill20 > 0) printf("20 Baht: %d\n", bill20);
    if (coin10 > 0) printf("10 Baht: %d\n", coin10);
    if (coin5 > 0) printf("5 Baht: %d\n", coin5);
    if (coin2 > 0) printf("2 Baht: %d\n", coin2);
    if (coin1 > 0) printf("1 Baht: %d\n", coin1);

    return 0;
}
