#include <stdio.h>

int main() {
   int ZoneCode;
   float weight_kg;
   float totalCost = 0.0;
   
   if(scanf("%d %f", &ZoneCode, &weight_kg) != 2){
       return 1;
   }
   
   switch(ZoneCode) {
       case 1:
            if(weight_kg <= 5)
                totalCost = 50;
            else
                totalCost = 80;
            break;
        case 2:
            if(weight_kg <= 10)
                totalCost = 150;
            else
                totalCost = 250;
            break;
        case 3:
            totalCost = 500;
            break;
        default:
            printf("Invalid Zone Code\n");
            return 0;
   }
   
   printf("%.2f\n", totalCost);
    return 0;
}