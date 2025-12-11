#include <stdio.h>

int main() {
    int NUM_STUDENTS = 5;
    int scores[NUM_STUDENTS];
    int index;
    int countAboveAverage = 0;
    int sumScores = 0;
    float avgScore = 0.0;

    for (index = 0; index < NUM_STUDENTS; index++) {
        printf("Enter score for student %d: ", index + 1);
        scanf("%d", &scores[index]);
    }

    for (index = 0; index < NUM_STUDENTS; index++) {
        sumScores += scores[index];
        avgScore = sumScores / 5;
    }

    for (index = 0; index < NUM_STUDENTS; index++) {
        if (scores[index] > avgScore) {
            countAboveAverage++;
        }
    }

    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n");
    printf("Recorded Scores: ");
    for (index = 0; index < NUM_STUDENTS; index++) {
        printf("%d ", scores[index]);
    }
    printf("\n");
    printf("Total Sum: %d\n", sumScores);
    printf("Average Score: %.2f\n", avgScore);
    printf("Number of Scores Above Average: %d\n", countAboveAverage);

    return 0;
}
