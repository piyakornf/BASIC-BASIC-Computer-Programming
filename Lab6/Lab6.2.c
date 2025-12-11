#include <stdio.h>

//swap value function
void swapValue(int *firstValuePtr, int *secondValuePtr) {
    int tempValue;

    tempValue = *firstValuePtr;
    *firstValuePtr = *secondValuePtr;
    *secondValuePtr = tempValue;
}

int main() {
    int firstNumber, secondNumber;

    printf("Enter value for First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter value for Second Number: ");
    scanf("%d", &secondNumber);

    printf("\n--- SWAPPING REPORT ---\n");
    printf("Before Swap - First: %d, Second: %d\n", firstNumber, secondNumber);

    swapValue(&firstNumber, &secondNumber);
    printf("After Swap - First: %d, Second: %d\n", firstNumber, secondNumber);

    return 0;
}
