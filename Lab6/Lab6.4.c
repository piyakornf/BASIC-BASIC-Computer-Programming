#include <stdio.h>

// calculate Sum Product function
void calculateSumProduct(int firstNumber, int secondNumber, int *sumResultPtr, int *productResultPtr) {
    *sumResultPtr = firstNumber + secondNumber;
    *productResultPtr = firstNumber * secondNumber;
}

int main() {
    int inputA, inputB;
    int sumOutput, productOutput;

    printf("Enter first integer (A): ");
    scanf("%d", &inputA);

    printf("Enter second integer (B): ");
    scanf("%d", &inputB);

    calculateSumProduct(inputA, inputB, &sumOutput, &productOutput);

    printf("\n--- CALCULATION REPORT ---\n");
    printf("Input Values: A = %d, B = %d\n", inputA, inputB);
    printf("--------------------------------------\n");
    printf("Result Sum (A + B): %d\n", sumOutput);
    printf("Result Product (A * B): %d\n", productOutput);

    return 0;
}
