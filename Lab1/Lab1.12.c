#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    
    if(scanf("%d %f", &planCode, &dataUsage_GB) != 2){
        return 1;
    }
    
    if(planCode == 1) {
        if(dataUsage_GB <= 10){
            totalBill = 299;
        }else{
            totalBill = 299 + 10 *(dataUsage_GB - 10);
        }
    }
    else if(planCode == 2){
        if(dataUsage_GB <= 20){
            totalBill = 599;
        }else{
            totalBill = 599 + 50 + 5 * (dataUsage_GB - 20);
        }
    }
    else{
        printf("Invalid Plan Code\n");
        return 0;
    }
    
    printf("%.2f\n", totalBill);
    return 0;
}