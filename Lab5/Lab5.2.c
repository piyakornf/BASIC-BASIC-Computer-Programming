#include <stdio.h>

struct Employee {
    int employeeId;
    int baseSalary;
    int salaryBonus;
    int totalEarnings;
};

int computeNetSalary(int totalEarnings);

int computeNetSalary(int totalEarnings) {
    int netSalaryResult;
    float appliedTaxRate, calculatedTax;

    if (totalEarnings > 30000) {
        appliedTaxRate = 0.10;
    } else {
        appliedTaxRate = 0.05;
    }

    calculatedTax = totalEarnings * appliedTaxRate;
    netSalaryResult = totalEarnings - (int)calculatedTax;

    return netSalaryResult;
}

int main() {
    struct Employee employeeData;
    int finalNetSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &employeeData.employeeId);

    printf("Enter Gross Salary: ");
    scanf("%d", &employeeData.baseSalary);

    printf("Enter Bonus: ");
    scanf("%d", &employeeData.salaryBonus);

    employeeData.totalEarnings = employeeData.baseSalary + employeeData.salaryBonus;
    finalNetSalary = computeNetSalary(employeeData.totalEarnings);

    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", employeeData.employeeId);
    printf("Gross Salary: %d\n", employeeData.baseSalary);
    printf("Bonus: %d\n", employeeData.salaryBonus);
    printf("Total Income: %d\n", employeeData.totalEarnings);
    printf("Net Salary: %d\n", finalNetSalary);

    return 0;
}
