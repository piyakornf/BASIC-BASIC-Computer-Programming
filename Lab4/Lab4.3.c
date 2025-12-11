#include <stdio.h>

int main() {
    int NUM_DAYS = 7;
    int temperatures[NUM_DAYS];
    int highestTemp;
    int dayIndex;

    for (dayIndex = 0; dayIndex < NUM_DAYS; dayIndex++) {
        printf("Enter temperature for Day %d: ", dayIndex + 1);
        scanf("%d", &temperatures[dayIndex]);
    }

    highestTemp = temperatures[0];

    for (dayIndex = 0; dayIndex < NUM_DAYS; dayIndex++) {
        if (temperatures[dayIndex] > highestTemp) {
            highestTemp = temperatures[dayIndex];
        }
    }

    printf("\n--- DAY TEMPERATURE REPORT ---\n");
    printf("Recorded Temperatures (C): ");
    for (dayIndex = 0; dayIndex < NUM_DAYS; dayIndex++) {
        printf("%d ", temperatures[dayIndex]);
    }

    printf("\n");
    printf("Maximum Temperature Found: %d C\n", highestTemp);

    if (highestTemp >= 35) {
        printf("Weather is HOT!\n");
    } else {
        printf("Weather is MODERATE.\n");
    }

    return 0;
}
