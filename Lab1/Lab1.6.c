#include <stdio.h>

int main() {
    int value;
    
    // TODO: Implement the do-while loop structure for validation
    do {
        printf("Enter a number (1-10): ");
        if (scanf("%d", &value) != 1) {
            break; 
        }

        // TODO: Implement the error message print inside the loop if validation fails
        if (value < 1 || value > 10) {
            printf("Error: Value must be 1-10.\n");
        }
    } while (value < 1 || value > 10);

    printf("Input accepted: %d\n", value);
    return 0;
}
