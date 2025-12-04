#include <stdio.h>
#include <string.h>

struct Salesperson {
    char fullName[50];
    float targetAmount;
    float actualAmount;
};

float computeCommission(float targetAmount, float actualAmount) {
    float commission = actualAmount * 0.10; // base 10%

    if (actualAmount >= targetAmount * 1.20) {
        commission += 200.0; // high bonus
    } else if (actualAmount >= targetAmount) {
        commission += 50.0; // basic reward
    } else if (actualAmount < targetAmount * 0.90) {
        commission -= 100.0; // penalty
    }
    return commission;
}

int main(void) {
    int recordCount;
    float totalCommission = 0.0;

    printf("Enter number of salesperson records: ");
    if (scanf("%d", &recordCount) != 1 || recordCount <= 0) {
        printf("Invalid number of records.\n");
        return 1;
    }

    struct Salesperson team[recordCount];

    for (int i = 0; i < recordCount; i++) {
        printf("\nRecord %d (target actual name): ", i + 1);

        if (scanf("%f %f %s", &team[i].targetAmount, &team[i].actualAmount, team[i].fullName) != 3) {
            printf("Invalid input detected.\n");
            return 1;
        }

        float commission = computeCommission(team[i].targetAmount, team[i].actualAmount);
        totalCommission += commission;
    }

    printf("\n--- Commission Summary ---\n");
    printf("Grand Total Commission: %.2f\n", totalCommission);

    return 0;
}
