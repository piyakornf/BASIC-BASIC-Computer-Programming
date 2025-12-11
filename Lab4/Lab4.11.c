#include <stdio.h>

int main() {
    int NUM_ROWS = 2, NUM_COLS = 4;
    int numberMatrix[NUM_ROWS][NUM_COLS];
    int rowIndex, colIndex, sumOfElements = 0;

    printf("Enter %d integer numbers for the 2x4 matrix:\n", NUM_ROWS * NUM_COLS);

    for (rowIndex = 0; rowIndex < NUM_ROWS; rowIndex++) {
        for (colIndex = 0; colIndex < NUM_COLS; colIndex++) {
            printf("Enter element for Row %d, Col %d: ", rowIndex + 1, colIndex + 1);
            scanf("%d", &numberMatrix[rowIndex][colIndex]);
            sumOfElements += numberMatrix[rowIndex][colIndex];
        }
    }

    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Recorded Matrix (2x4):\n");

    for (rowIndex = 0; rowIndex < NUM_ROWS; rowIndex++) {
        for (colIndex = 0; colIndex < NUM_COLS; colIndex++) {
            printf("%4d ", numberMatrix[rowIndex][colIndex]);
        }
        printf("\n");
    }

    printf("\nTotal Sum of all elements: %d\n", sumOfElements);

    return 0;
}
