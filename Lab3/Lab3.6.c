#include <stdio.h>

struct Record {
    char note[50];
    float amount;
};

int main() {
    int numRecords, idx;
    float totalIncome = 0.0;
    float totalExpense = 0.0;
    float netBalance = 0.0;

    // Read number of transactions
    if (scanf("%d", &numRecords) != 1) {
        return 1;
    }

    struct Record records[numRecords];

    // Read each transaction
    for (idx = 0; idx < numRecords; idx++) {
        if (scanf("%f %s", &records[idx].amount, records[idx].note) != 2) {
            return 1;
        }

        if (records[idx].amount >= 0.0) {
            totalIncome += records[idx].amount;
        } else {
            totalExpense += -records[idx].amount;
        }
    }

    netBalance = totalIncome - totalExpense;

    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance: %.2f\n", netBalance);

    return 0;
}