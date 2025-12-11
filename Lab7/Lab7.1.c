#include <stdio.h>

int main() {
    FILE *filePtr;
    const char *OUTPUT_FILENAME = "output_data.txt";
    int currentYear = 2025;

    filePtr = fopen(OUTPUT_FILENAME, "w");

    if (filePtr == NULL) {
        printf("ERROR: Could not open file %s for writing.\n", OUTPUT_FILENAME);
    }

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n", OUTPUT_FILENAME);

    fprintf(filePtr, "Hello, C File Handling is easy.\n");
    fprintf(filePtr, "%d", currentYear);

    fclose(filePtr);

    printf("File writing complete.\n");
    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", OUTPUT_FILENAME);

    return 0;
}
