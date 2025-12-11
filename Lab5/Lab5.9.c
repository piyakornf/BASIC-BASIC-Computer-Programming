#include <stdio.h>
#include <stdlib.h>

struct Product {
    char productCode[10];
    float costPerUnit;
    float sellPerUnit;
    int quantityInStock;
};

// Calculate total profit based on cost, sell price, and quantity
float getTotalProfit(float cost, float sell, int quantity) {
    float profitPerUnit = sell - cost;
    return profitPerUnit * quantity;
}

// Calculate profit percentage based on cost and sell price
float getProfitPercentage(float cost, float sell) {
    float profitPerUnit = sell - cost;
    return (profitPerUnit / cost) * 100;
}

int main() {
    struct Product productInfo;
    int extractedID;
    float totalProfit;
    float profitPercentage;

    printf("Enter Product Code: ");
    scanf("%s", productInfo.productCode);

    // Extract number from format like P001
    extractedID = atoi(productInfo.productCode + 1);

    printf("Enter Cost Price per unit: ");
    scanf("%f", &productInfo.costPerUnit);

    printf("Enter Sell Price per unit: ");
    scanf("%f", &productInfo.sellPerUnit);

    printf("Enter Stock Quantity: ");
    scanf("%d", &productInfo.quantityInStock);

    totalProfit = getTotalProfit(productInfo.costPerUnit, productInfo.sellPerUnit, productInfo.quantityInStock);
    profitPercentage = getProfitPercentage(productInfo.costPerUnit, productInfo.sellPerUnit);

    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Product ID: %d\n", extractedID);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n",
           productInfo.costPerUnit,
           productInfo.sellPerUnit,
           productInfo.quantityInStock);

    printf("Total Profit: %.2f\n", totalProfit);
    printf("Profit Percentage: %.2f%%\n", profitPercentage);

    if (totalProfit > 0) {
        printf("Status: Profit!");
    } else if (totalProfit == 0) {
        printf("Status: Break Even.");
    } else {
        printf("Status: Loss!");
    }

    return 0;
}
