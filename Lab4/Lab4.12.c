#include <stdio.h>

void print_matrix(int rowCount, int colCount, int *matrixData) {
    int rowIndex, colIndex;
    for (rowIndex = 0; rowIndex < rowCount; rowIndex++) {
        for (colIndex = 0; colIndex < colCount; colIndex++) {
            printf("%4d", matrixData[rowIndex * colCount + colIndex]);
        }
        printf("\n");
    }
}

int main() {
    int aRows = 2, aCols = 3;
    int bRows = 2, bCols = 3;
    int btRows = 3, btCols = 2;
    int cRows = 2, cCols = 2;

    int matrixA[aRows][aCols];
    int matrixB[bRows][bCols];
    int matrixBT[btRows][btCols];
    int matrixC[cRows][cCols];

    int rowIndex, colIndex, midIndex;

    printf("Enter elements for Matrix A (2x3):\n");
    for (rowIndex = 0; rowIndex < aRows; rowIndex++) {
        for (colIndex = 0; colIndex < aCols; colIndex++) {
            printf("A[%d][%d]: ", rowIndex, colIndex);
            scanf("%d", &matrixA[rowIndex][colIndex]);
        }
    }

    printf("Enter elements for Matrix B (2x3):\n");
    for (rowIndex = 0; rowIndex < bRows; rowIndex++) {
        for (colIndex = 0; colIndex < bCols; colIndex++) {
            printf("B[%d][%d]: ", rowIndex, colIndex);
            scanf("%d", &matrixB[rowIndex][colIndex]);
        }
    }

    // Transpose B -> BT
    for (rowIndex = 0; rowIndex < btRows; rowIndex++) {
        for (colIndex = 0; colIndex < btCols; colIndex++) {
            matrixBT[rowIndex][colIndex] = matrixB[colIndex][rowIndex];
        }
    }

    // Multiply A × BT → C
    for (rowIndex = 0; rowIndex < cRows; rowIndex++) {
        for (colIndex = 0; colIndex < cCols; colIndex++) {
            matrixC[rowIndex][colIndex] = 0;
            for (midIndex = 0; midIndex < aCols; midIndex++) {
                matrixC[rowIndex][colIndex] += matrixA[rowIndex][midIndex] * matrixBT[midIndex][colIndex];
            }
        }
    }

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    print_matrix(aRows, aCols, &matrixA[0][0]);

    printf("\nMatrix B (2x3):\n");
    print_matrix(bRows, bCols, &matrixB[0][0]);

    printf("\nMatrix B Transposed (3x2):\n");
    print_matrix(btRows, btCols, &matrixBT[0][0]);

    printf("\nResult Matrix C (2x2):\n");
    print_matrix(cRows, cCols, &matrixC[0][0]);

    return 0;
}
