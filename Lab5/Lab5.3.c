#include <stdio.h>
#define ARRAY_SIZE 5

/* 
    calculateArraySum
    - Loops through an array and returns the total sum of all elements.
*/
int calculateArraySum(int numberList[], int listSize) {
    int totalSum = 0;    // accumulator
    for (int index = 0; index < listSize; index++) {
        totalSum += numberList[index];
    }
    return totalSum;
}

int main() {
    int inputNumbers[ARRAY_SIZE];
    int sumResult;
    float averageValue;

    /* Input section */
    printf("Enter %d integers:\n", ARRAY_SIZE);
    for (int index = 0; index < ARRAY_SIZE; index++) {
        scanf("%d", &inputNumbers[index]);
    }

    /* Calculation section */
    sumResult = calculateArraySum(inputNumbers, ARRAY_SIZE);
    averageValue = (float) sumResult / ARRAY_SIZE;

    /* Output section */
    printf("\n--- ARRAY STATISTICS REPORT ---\n");
    printf("Numbers Entered : ");
    for (int index = 0; index < ARRAY_SIZE; index++) {
        printf("%d ", inputNumbers[index]);
    }
    printf("\n");

    printf("Total Sum       : %d\n", sumResult);
    printf("Average Value   : %.2f\n", averageValue);

    return 0;
}
