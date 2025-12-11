#include <stdio.h>
#define SIZE 5

void sortArrayAscending(int arr[], int length);
void printArray(int arr[], int length);

int main() {
    int inputNumbers[SIZE];
    int backupNumbers[SIZE];
    int index;

    printf("Enter %d integer numbers for sorting:\n", SIZE);
    for (index = 0; index < SIZE; index++) {
        printf("Element %d: ", index + 1);
        scanf("%d", &inputNumbers[index]);
        backupNumbers[index] = inputNumbers[index];
    }

    sortArrayAscending(inputNumbers, SIZE);

    printf("\n--- ARRAY SORTING REPORT ---\n");
    printf("Original array: ");
    printArray(backupNumbers, SIZE);

    printf("Sorted Array (Ascending): ");
    printArray(inputNumbers, SIZE);

    return 0;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArrayAscending(int arr[], int length) {
    int temp;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
