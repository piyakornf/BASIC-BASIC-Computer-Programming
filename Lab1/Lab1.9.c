#include <stdio.h>

int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;

    if (scanf("%d %f", &zoneCode, &weight_kg) != 2) {
        return 1;  // อินพุตผิด
    }

    switch (zoneCode) {

        case 1: // Local
            if (weight_kg <= 5)
                totalCost = 50;
            else
                totalCost = 80;
            break;

        case 2: // Regional
            if (weight_kg <= 10)
                totalCost = 150;
            else
                totalCost = 250;
            break;

        case 3: // International
            totalCost = 500;
            break;

        default:
            printf("Invalid Zone Code\n");
            return 0;
    }

    printf("Total Cost: %.2f\n", totalCost);

    return 0;
}
