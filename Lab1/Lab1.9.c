#include <stdio.h>

int main() {
    int zone;              
    float weight;          
    float cost = 0.0;      
    
   
    if (scanf("%d %f", &zone, &weight) != 2) {
        return 1; 
    }
    
    
    switch (zone) {
        case 1:
            if (weight <= 5) {
                cost = 50;
            } else {
                cost = 80;
            }
            break;
        case 2:
            if (weight <= 10) {
                cost = 150;
            } else {
                cost = 250;
            }
            break;
        case 3:
            cost = 500;
            break;
        default:
            printf("Invalid Zone Code\n");
            break;
    }

   
    if (cost > 0.0 || zone > 3 || zone < 1) {
        printf("%.2f\n", cost);
    }

    return 0;
}
