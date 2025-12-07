#include <stdio.h>

int main() {
    
    char inputString[101]; 
    
    
    int counterUppercase = 0;
    int counterLowercase = 0;
    int counterDigit = 0;
    int counterSpecialOrOther = 0;
    
    
    int characterIndex;

    
    if (scanf("%s", inputString) != 1) {
        return 1; 
    }

    
    for (characterIndex = 0; inputString[characterIndex] != '\0'; characterIndex++) {
        
        
        if (inputString[characterIndex] >= 'A' && inputString[characterIndex] <= 'Z') {
            counterUppercase++;
        
        } else if (inputString[characterIndex] >= 'a' && inputString[characterIndex] <= 'z') {
            counterLowercase++;
        
        } else if (inputString[characterIndex] >= '0' && inputString[characterIndex] <= '9') {
            counterDigit++;
        
        } else {
            counterSpecialOrOther++;
        }
    }

    
    printf("Uppercase: %d\n", counterUppercase);
    printf("Lowercase: %d\n", counterLowercase);
    printf("Digits: %d\n", counterDigit);
    printf("Special/Other: %d\n", counterSpecialOrOther);
    
    return 0;
}