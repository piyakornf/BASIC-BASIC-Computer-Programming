#include <stdio.h>
#include <string.h> // for strcspn
#define MAX_LENGTH 100

// count vowels with pointer function
int countVowelsWithPointer(char *textPtr) {
    int vowelCount = 0;
    char *currentCharPtr = textPtr;

    while (*currentCharPtr != '\0') {
        char currentChar = *currentCharPtr;

        if (currentChar == 'A' || currentChar == 'a' ||
            currentChar == 'E' || currentChar == 'e' ||
            currentChar == 'I' || currentChar == 'i' ||
            currentChar == 'O' || currentChar == 'o' ||
            currentChar == 'U' || currentChar == 'u') {
            vowelCount++;
        }
        currentCharPtr++;
    }
    return vowelCount;
}

int main() {
    char inputSentence[MAX_LENGTH];
    int totalVowels;

    printf("Enter a sentence: ");
    if (fgets(inputSentence, MAX_LENGTH, stdin) == NULL) {
        return 1;
    }

    inputSentence[strcspn(inputSentence, "\n")] = '\0'; // remove newline

    totalVowels = countVowelsWithPointer(inputSentence);

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", inputSentence);
    printf("Total Vowel Count: %d\n", totalVowels);

    return 0;
}
