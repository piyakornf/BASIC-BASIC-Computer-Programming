#include <stdio.h>
#define TOTAL_MONTHS 3

// Function to calculate total revenue/expense and net profit
int analyzeProfitability(int *revenuePtr, int *expensePtr, int monthCount, int *statusPtr) {
    int totalRevenue = 0, totalExpense = 0;

    for (int index = 0; index < monthCount; index++) {
        totalRevenue += revenuePtr[index];
        totalExpense += expensePtr[index];
    }

    int netProfit = totalRevenue - totalExpense;
    *statusPtr = (netProfit >= 0) ? 1 : 0;
    return netProfit;
}

// Get monthly data with full input validation (request re-entry)
void getMonthlyData(int dataArray[], int monthCount, const char *label) {
    printf("\nEnter %d months of %s values:\n", monthCount, label);

    for (int index = 0; index < monthCount; index++) {
        while (1) {
            printf("Month %d %s: ", index + 1, label);
            if (scanf("%d", &dataArray[index]) == 1) break;

            printf("ERROR: Invalid input. Enter an integer only!\n");
            while (getchar() != '\n'); // clear input buffer
        }
    }
}

// Display results clearly in table format
void printMonthlyData(int dataArray[], int monthCount, const char *label) {
    long totalValue = 0;

    printf("\n%-10s | VALUE\n", label);
    printf("---------------------\n");

    for (int index = 0; index < monthCount; index++) {
        printf("Month %-3d | %d\n", index + 1, dataArray[index]);
        totalValue += dataArray[index];
    }

    printf("---------------------\n");
    printf("TOTAL %-4s | %ld\n", label, totalValue);
}

int main() {
    int monthlyRevenue[TOTAL_MONTHS], monthlyExpense[TOTAL_MONTHS];
    int finalNetProfit, businessStatus;

    getMonthlyData(monthlyRevenue, TOTAL_MONTHS, "REVENUE");
    getMonthlyData(monthlyExpense, TOTAL_MONTHS, "EXPENSE");

    finalNetProfit = analyzeProfitability(monthlyRevenue, monthlyExpense, TOTAL_MONTHS, &businessStatus);

    printf("\n===== 3-MONTH FINANCIAL ANALYSIS REPORT =====\n");

    printMonthlyData(monthlyRevenue, TOTAL_MONTHS, "REVENUE");
    printMonthlyData(monthlyExpense, TOTAL_MONTHS, "EXPENSE");

    printf("\nNET PROFIT : %d\n", finalNetProfit);
    printf("BUSINESS STATUS : %s\n", businessStatus ? "PROFITABLE" : "UNPROFITABLE");

    return 0;
}
