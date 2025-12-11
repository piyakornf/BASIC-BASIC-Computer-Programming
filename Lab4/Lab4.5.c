#include <stdio.h>

int main() {
    int ARRAY_SIZE = 6;
    int numberList[ARRAY_SIZE];
    int sumTotal = 0;
    int index;

    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("Enter integer number %d: ", index + 1);
        scanf("%d", &numberList[index]);
    }

    for (index = 0; index < ARRAY_SIZE; index++) {
        sumTotal += numberList[index];
    }

    printf("\n--- SUMMATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("%d ", numberList[index]);
    }
    printf("\n");
    printf("Total Sum of Numbers: %d\n", sumTotal);

    return 0;
}
