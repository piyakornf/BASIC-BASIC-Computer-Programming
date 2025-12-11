#include <stdio.h>

int main() {
    int monthlyGrossSalary;
    float appliedTaxRate = 0.0, calculatedTax = 0.0, finalNetSalary = 0.0;

    printf("Enter Gross Salary (THB/month, integer): ");
    scanf("%d", &monthlyGrossSalary);

    if (monthlyGrossSalary >= 20000 && monthlyGrossSalary < 50000) {
        appliedTaxRate = 0.05;
    } else if (monthlyGrossSalary >= 50000) {
        appliedTaxRate = 0.1;
    }

    calculatedTax = monthlyGrossSalary * appliedTaxRate;
    finalNetSalary = monthlyGrossSalary - calculatedTax;

    printf("\n--- SALARY CALCULATION REPORT ---\n");
    printf("Gross Salary: %d THB\n", monthlyGrossSalary);
    printf("Tax Rate Applied: %.0f%%\n", appliedTaxRate * 100);
    printf("Tax Amount Deducted: %.2f THB\n", calculatedTax);
    printf("Net Salary: %.2f THB\n", finalNetSalary);

    return 0;
}
