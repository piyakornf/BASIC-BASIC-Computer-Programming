#include <stdio.h>

// Structure to hold information about a single marketing campaign
struct MarketingCampaign {
    char campaignName[50];
    float productSellingPrice;
    int unitsSoldCount;
    float advertisementExpense;
};


int main () {

    int numberOfCampaigns, loopIndex;

    float commissionPercentageRate = 0.0;
    
    
    float calculatedRevenue, calculatedCommission, calculatedNetProfitLoss;

    
    if (scanf("%d", &numberOfCampaigns) != 1) {
        return 1;
    }

    
    struct MarketingCampaign campaignDataArray[numberOfCampaigns];
    
    
    for (loopIndex = 0; loopIndex < numberOfCampaigns; loopIndex++) {
        
        if (scanf("%s %f %d %f", 
                  campaignDataArray[loopIndex].campaignName, 
                  &campaignDataArray[loopIndex].productSellingPrice, 
                  &campaignDataArray[loopIndex].unitsSoldCount, 
                  &campaignDataArray[loopIndex].advertisementExpense) != 4) {
            return 1; 
        }

        
        calculatedRevenue = campaignDataArray[loopIndex].unitsSoldCount * campaignDataArray[loopIndex].productSellingPrice;

        
        if (campaignDataArray[loopIndex].unitsSoldCount >= 20) {
            commissionPercentageRate = 0.20;
        } else if (campaignDataArray[loopIndex].unitsSoldCount >= 10) {
            commissionPercentageRate = 0.15;
        } else {
            commissionPercentageRate = 0.10;
        }

        
        calculatedCommission = calculatedRevenue * commissionPercentageRate;

        
        calculatedNetProfitLoss = calculatedCommission - campaignDataArray[loopIndex].advertisementExpense;

        
        printf("---Campaign: %s ---\n", campaignDataArray[loopIndex].campaignName);
        printf("Sales: %d, Ad spend: %.2f\n", campaignDataArray[loopIndex].unitsSoldCount, campaignDataArray[loopIndex].advertisementExpense);
        printf("Rate Used: %.0f%%\n", commissionPercentageRate * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n", 
               calculatedRevenue, 
               commissionPercentageRate * 100, 
               campaignDataArray[loopIndex].advertisementExpense, 
               calculatedNetProfitLoss);
        printf("Net Result: %.2f\n", calculatedNetProfitLoss);
    }

    return 0;
}