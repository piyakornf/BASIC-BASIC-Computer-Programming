#include <stdio.h>

//increase value function
void increaseValue(int *valuePtr) {
    *valuePtr += 10;
}

int main() {
    int initialValue;

    printf("Enter initial integer value: ");
    scanf("%d", &initialValue);

    printf("\n--- POINTER MODIFICATION REPORT ---\n");
    printf("1. Value BEFORE function call: %d\n", initialValue);

    increaseValue(&initialValue);

    printf("2. Value AFTER function call: %d\n", initialValue);

    return 0;
}
