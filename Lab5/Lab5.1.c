#include <stdio.h>

int calculateArea(int rectLength, int rectWidth);

int calculateArea(int rectLength, int rectWidth) {
    int rectangleArea;
    rectangleArea = rectLength * rectWidth;
    return rectangleArea;
}

int main() {
    int rectLength, rectWidth, rectArea;

    printf("Enter rectangle length (integer): ");
    scanf("%d", &rectLength);

    printf("Enter rectangle width (integer): ");
    scanf("%d", &rectWidth);

    rectArea = calculateArea(rectLength, rectWidth);

    printf("\n--- RECTANGLE AREA REPORT ---\n");
    printf("Length: %d\n", rectLength);
    printf("Width: %d\n", rectWidth);
    printf("Calculated Area: %d\n", rectArea);

    return 0;
}
