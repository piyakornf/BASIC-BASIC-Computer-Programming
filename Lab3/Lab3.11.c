#include <stdio.h>

int main() {
    
    int userSelection;

    
    const int cokePrice = 15;
    const int waterPrice = 10;
    const int snackPrice = 25; 

    
    float accumulatedCost = 0.0;
    float cashPaidByCustomer, calculatedChange;

    
    do {
        
        printf("\n--- VENDING MACHINE MENU ---\n");
        printf("1. Coke: %.2f baht\n", (float)cokePrice);
        printf("2. Water: %.2f baht\n", (float)waterPrice);
        printf("3. Snack: %.2f baht\n", (float)snackPrice); 
        printf("4. Exit/Pay\n");
        printf("Current Total: %.2f\n", accumulatedCost);

        printf("Select item (1-4): ");
        if (scanf("%d", &userSelection) != 1) {
            
            break; 
        }

        switch (userSelection) {
            case 1:
                accumulatedCost += cokePrice;
                printf("Coke added. Current Total: %.2f\n", accumulatedCost);
                break;
            case 2:
                accumulatedCost += waterPrice;
                printf("Water added. Current Total: %.2f\n", accumulatedCost);
                break;
            case 3:
                accumulatedCost += snackPrice;
                printf("Snack added. Current Total: %.2f\n", accumulatedCost);
                break;
            case 4:
                
                break;
            default:
                printf("Invalid choice. Please select 1, 2, 3, or 4.\n");
                break;
        }
    } while (userSelection != 4);
    
    
    if (accumulatedCost > 0.0) {
        printf("\nTotal due: %.2f\n", accumulatedCost);
        printf("Enter paid amount: ");
        
        if (scanf("%f", &cashPaidByCustomer) != 1) {
            return 1; 
        }

        if (cashPaidByCustomer >= accumulatedCost) {
            calculatedChange = cashPaidByCustomer - accumulatedCost;
            printf("Purchase Sucessful. Change: %.2f\n", calculatedChange);
        } else {
            printf("Insufficient payment. Purchase cancelled.\n");
        }
    } else {
        printf("No items purchased. Goodbye.\n");
    }

    return 0;
}