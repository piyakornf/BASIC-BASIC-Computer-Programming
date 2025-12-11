#include <stdio.h>

int main() {
    int NUM_ROWS = 3, NUM_COLS = 3;
    int matrix[NUM_ROWS][NUM_COLS];
    int rowIndex, colIndex;

    printf("Enter %d integer numbers for the 3x3 array:\n", NUM_ROWS * NUM_COLS);

    for (rowIndex = 0; rowIndex < NUM_ROWS; rowIndex++) {
        for (colIndex = 0; colIndex < NUM_COLS; colIndex++) {
            printf("Enter element for Row %d, Col %d: ", rowIndex, colIndex);
            scanf("%d", &matrix[rowIndex][colIndex]);
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", NUM_ROWS, NUM_COLS);
    printf("Content (Table Format):\n");

    for (rowIndex = 0; rowIndex < NUM_ROWS; rowIndex++) {
        for (colIndex = 0; colIndex < NUM_COLS; colIndex++) {
            printf("%d ", matrix[rowIndex][colIndex]);
        }
        printf("\n");
    }

    return 0;
}
