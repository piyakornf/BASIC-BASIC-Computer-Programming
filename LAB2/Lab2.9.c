#include <stdio.h>

int main() {
    int startStock, numCommands, command, amount, i, stock;
    float penaltyRate;
    float totalPenalty = 0.0;

    if (scanf("%d %f %d", &startStock, &penaltyRate, &numCommands) != 3) {
        return 1;
    }

    stock = startStock;

    for (i = 0; i < numCommands; i++) {
        if (scanf("%d %d", &command, &amount) != 2) {
            break;
        }

        switch (command) {
            case 1:
                stock += amount;
                printf("Received %d units.\n", amount);
                break;

            case 2:
                if (amount <= 0) {
                    printf("Error: Quantity must be positive.\n");
                } else if (amount <= stock) {
                    stock -= amount;
                    printf("Shipped %d units.\n", amount);
                } else {
                    totalPenalty += penaltyRate;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", penaltyRate);
                }
                break;

            case 3:
                printf("Current stock: %d\n", stock);
                printf("Total Penalties: %.2f\n", totalPenalty);
                break;

            default:
                printf("Error: Invalid Command.\n");
                break;
        }
    }

    return 0;
}
