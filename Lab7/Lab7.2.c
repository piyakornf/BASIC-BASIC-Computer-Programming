#include <stdio.h>

int main() {
    FILE *filePtr;
    const char *FILE_NAME = "input_data.csv";
    
    int value1, value2, value3, value4, value5;
    int sumTotal;

    filePtr = fopen(FILE_NAME, "r");

    if (filePtr == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", FILE_NAME);
        return 1; // ป้องกันไม่ให้ fscanf ใช้ pointer NULL
    }

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILE_NAME);

    fscanf(filePtr, "%d,%d,%d,%d,%d", 
           &value1, &value2, &value3, &value4, &value5);

    fclose(filePtr);

    sumTotal = value1 + value2 + value3 + value4 + value5;

    printf("File reading complete.\n");
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", 
           value1, value2, value3, value4, value5);
    printf("Total Sum: %d\n", sumTotal);

    return 0;
}
