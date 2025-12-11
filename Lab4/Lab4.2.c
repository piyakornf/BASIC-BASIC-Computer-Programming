#include <stdio.h>

int main() {
    int totalStudents, i;
    int passingScoreSum = 0, failingStudentCount = 0;

    scanf("%d", &totalStudents);

    int scoreList[totalStudents];

    for (i = 0; i < totalStudents; i++) {
        scanf("%d", &scoreList[i]);

        if (scoreList[i] >= 50) {
            passingScoreSum += scoreList[i];
        } else {
            failingStudentCount++;
        }
    }

    printf("Passing Scores Sum: %d\n", passingScoreSum);
    printf("Failing Students Count: %d\n", failingStudentCount);

    return 0;
}
