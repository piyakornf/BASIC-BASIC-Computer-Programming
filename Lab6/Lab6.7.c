#include <stdio.h>

// Function to compute chance of winning using the x4 rule
float calculateWinningChance(int totalOuts) {
    return totalOuts * 4.0f;
}

int main() {
    int detectedOuts;
    float winProbability;

    printf("Number of outs: ");
    scanf("%d", &detectedOuts);

    winProbability = calculateWinningChance(detectedOuts);

    printf("\n--- POKER PROBABILITY SUMMARY (2 Cards Remaining) ---\n");
    printf("Outs detected: %d\n", detectedOuts);
    printf("Estimated chance of winning: %.2f%%\n", winProbability);

    printf("Result: ");
    if (winProbability >= 30.0f) {
        printf("Likely TO WIN\n");
    } else {
        printf("Unlikely TO WIN\n");
    }

    return 0;
}
