#include <stdio.h>

int main() {
    
    float principal_balance, monthly_payment, monthly_interest_charge;
    int months_elapsed = 0;
    
    
    const float MONTHLY_INTEREST_RATE = 0.01; // 1%
    const float MISSED_PAYMENT_PENALTY = 10.0; // $10.00 penalty
    
   
    if (scanf("%f %f", &principal_balance, &monthly_payment) != 2) {
        return 1;
    }

    
    while (principal_balance > 0) {
        months_elapsed++;
        
        
        monthly_interest_charge = principal_balance * MONTHLY_INTEREST_RATE;
        principal_balance += monthly_interest_charge;

        
        if (monthly_payment < monthly_interest_charge) {
            principal_balance += MISSED_PAYMENT_PENALTY;
        }

        
        principal_balance -= monthly_payment;
        
        
        printf("Month %d: Remaining %.2f\n", months_elapsed, principal_balance);

        
        if (months_elapsed >= 10 && principal_balance > 0) {
            printf("Loan settled in 10+ months.\n");
            return 0;
        }
    }

    
    printf("Loan settled in %d months.\n", months_elapsed);
    return 0;
}