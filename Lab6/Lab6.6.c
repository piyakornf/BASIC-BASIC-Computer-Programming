#include <stdio.h>
#define TRANSACTION_SIZE 5

// calculate Net Balance function
int calculateNetBalance(int *transactionList, int listSize, int *statusPtr) {
    int totalBalance = 0;

    for (int index = 0; index < listSize; index++) {
        totalBalance += transactionList[index];
    }

    if (totalBalance < 0) {
        *statusPtr = 0;   // LOSS
    } else {
        *statusPtr = 1;   // PROFIT
    }

    return totalBalance;
}

int main() {
    int transactionData[TRANSACTION_SIZE];
    int finalBalance;
    int balanceStatus;
    int index;

    printf("Enter %d transactions (Income + Expense -):\n", TRANSACTION_SIZE);
    for (index = 0; index < TRANSACTION_SIZE; index++) {
        printf("Transaction %d: ", index + 1);
        scanf("%d", &transactionData[index]);
    }

    finalBalance = calculateNetBalance(transactionData, TRANSACTION_SIZE, &balanceStatus);

    printf("\n--- PERSONAL FINANCE REPORT ---\n");
    printf("Transactions Recorded: ");
    for (index = 0; index < TRANSACTION_SIZE; index++) {
        printf("%d ", transactionData[index]);
    }
    printf("\n");

    printf("Net Balance: %d\n", finalBalance);
    printf("Status: ");

    if (balanceStatus == 0) {
        printf("LOSS");
    } else {
        printf("PROFIT");
    }

    return 0;
}
