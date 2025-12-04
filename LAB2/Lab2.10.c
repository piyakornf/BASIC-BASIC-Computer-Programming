#include <stdio.h>

int main() {
    int numMonths, command, i;
    float startingBalance, penaltyRate, amount;
    float balance, interestRate, interestEarned;
    float totalPenalty = 0.0;

    if (scanf("%f %f %d", &startingBalance, &penaltyRate, &numMonths) != 3) {
        return 1;
    }

    balance = startingBalance;

    printf("Starting Balance: %.2f\n", startingBalance);

    for (i = 1; i <= numMonths; i++) {
        scanf("%d %f", &command, &amount);

        switch (command) {
            case 1:  // Deposit
                balance += amount;
                printf("Deposit: %.2f\n", amount);
                break;

            case 2:  // Withdrawal
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal: %.2f\n", amount);
                } else {
                    totalPenalty += penaltyRate;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyRate);
                }
                break;

            case 3:  // Apply interest
                if (balance < 1000.00) {
                    interestRate = 0.01;
                } else {
                    interestRate = 0.025;
                }

                interestEarned = balance * (interestRate / 12.0);
                balance += interestEarned;

                printf("Interest: %.2f (Rate: %.2f%%)\n", interestEarned, interestRate);
                break;

            default:
                printf("Error: Invalid Command.");
                break;
        }

        printf("--- Month %d ---\n", i);
    }

    printf("Final Balance: %.2f\n", balance);
    printf("Total Penalties: %.2f\n", totalPenalty);

    return 0;
}
