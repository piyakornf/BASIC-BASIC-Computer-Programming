#include <stdio.h>

int main () {
    
    int totalScenarios, loopIndex;
    
    
    int attackerLevel, opponentLevel, opponentArmorValue;

    
    float calculatedBaseAttack, damageReductionRate, finalNetDamage, requiredDamageDeficit;

    
    const float MIN_WORTH_THRESHOLD = 150.0;

    
    if (scanf("%d", &totalScenarios) != 1) {
        return 1;
    }

    
    for (loopIndex = 0; loopIndex < totalScenarios; loopIndex++) {
        
        if (scanf("%d %d %d", &attackerLevel, &opponentLevel, &opponentArmorValue) != 3) {
            break;
        }

        
        calculatedBaseAttack = attackerLevel * 10.0;

      
        if (opponentArmorValue < 50) {
            damageReductionRate = 0.20; 
        } else {
            damageReductionRate = 0.40; 
        }

        
        finalNetDamage = calculatedBaseAttack * (1.0 - damageReductionRate);

        
        if (finalNetDamage >= MIN_WORTH_THRESHOLD) {
            printf("SUCCESS! Net Damage: %.2f\n", finalNetDamage);
        } else {
            requiredDamageDeficit = MIN_WORTH_THRESHOLD - finalNetDamage;
            printf("FAIL. Deficit: %.2f\n", requiredDamageDeficit);
        }
    }

    return 0;
}