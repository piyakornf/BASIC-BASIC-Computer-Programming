#include <stdio.h>
#define TOTAL_EMPLOYEES 4

struct EmployeeInfo {
    int employeeID;
    int employeeSalary;
};

void getMinMaxSalary(struct EmployeeInfo employeeList[], int listSize, int *maxSalary, int *minSalary) {
    *maxSalary = employeeList[0].employeeSalary;
    *minSalary = employeeList[0].employeeSalary;

    for (int index = 1; index < listSize; index++) {
        if (employeeList[index].employeeSalary > *maxSalary) {
            *maxSalary = employeeList[index].employeeSalary;
        }

        if (employeeList[index].employeeSalary < *minSalary) {
            *minSalary = employeeList[index].employeeSalary;
        }
    }
}

int main() {
    struct EmployeeInfo employeeData[TOTAL_EMPLOYEES];
    int highestSalary, lowestSalary;
    int index;

    printf("Enter data for %d employees:\n", TOTAL_EMPLOYEES);
    for (index = 0; index < TOTAL_EMPLOYEES; index++) {
        printf("--- Employee %d ---\n", index + 1);
        printf("Enter ID: ");
        scanf("%d", &employeeData[index].employeeID);
        printf("Enter Salary: ");
        scanf("%d", &employeeData[index].employeeSalary);
    }

    getMinMaxSalary(employeeData, TOTAL_EMPLOYEES, &highestSalary, &lowestSalary);

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID      | Salary\n");
    printf("----------------\n");
    for (index = 0; index < TOTAL_EMPLOYEES; index++) {
        printf("%-6d | %d\n", employeeData[index].employeeID, employeeData[index].employeeSalary);
    }

    printf("\nMaximum Salary Found: %d\n", highestSalary);
    printf("Minimum Salary Found: %d\n", lowestSalary);

    return 0;
}
