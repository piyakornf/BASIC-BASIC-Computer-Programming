#include <stdio.h>

int main() {
    
    int totalSimulationDays, currentDay;

    
    float startingBudget, currentRemainingBudget, dailySpendingAmount;

    
    if (scanf("%f %d", &startingBudget, &totalSimulationDays) != 2) {
        return 1; 
    }

    currentRemainingBudget = startingBudget;

    printf("Day | Spend | Remaining\n");
    printf("----------------------------------\n");

    
    for (currentDay = 1; currentDay <= totalSimulationDays; currentDay++) {
        
        
        if (currentRemainingBudget >= 500.00) {
            dailySpendingAmount = 100.00; 
        } else if (currentRemainingBudget >= 100.00) {
            dailySpendingAmount = 50.00;  
        } else if (currentRemainingBudget > 0.0) {
            dailySpendingAmount = 20.0;  
        } else {
            dailySpendingAmount = 0.0;    
        }

        
        if (dailySpendingAmount > currentRemainingBudget) {
            dailySpendingAmount = currentRemainingBudget;
        }

        
        currentRemainingBudget -= dailySpendingAmount;
        
        
        printf("%d | %.2f | %.2f\n", currentDay, dailySpendingAmount, currentRemainingBudget);
    }

    printf("----------------------------------\n");
    printf("Final Budget: %.2f\n", currentRemainingBudget);
    return 0;
}