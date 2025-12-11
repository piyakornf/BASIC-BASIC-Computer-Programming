#include <stdio.h>

int main() {
    int ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];
    int evenCount = 0;
    int oddCount = 0;
    int index;

    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("Enter integer number %d: ", index + 1);
        scanf("%d", &numbers[index]);
    }

    for (index = 0; index < ARRAY_SIZE; index++) {
        if (numbers[index] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\n--- NUMBER CLASSIFICATION REPORT --\n");
    printf("Recorded Numbers: ");
    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("%d ", numbers[index]);
    }
    printf("\n");
    printf("Total Even Numbers Found: %d\n", evenCount);
    printf("Total Odd Numbers Found: %d\n", oddCount);

    return 0;
}
