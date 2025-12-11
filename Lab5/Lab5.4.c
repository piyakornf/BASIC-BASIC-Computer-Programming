#include <stdio.h>
#define TOTAL_STUDENTS 3

struct StudentInfo {
    int studentID;
    int studentScore;
};

int getHighestScoreID(struct StudentInfo studentList[], int listSize) {
    int highestIndex = 0;

    for (int index = 1; index < listSize; index++) {
        if (studentList[index].studentScore > studentList[highestIndex].studentScore) {
            highestIndex = index;
        }
    }

    return studentList[highestIndex].studentID;
}

int main() {
    struct StudentInfo classroom[TOTAL_STUDENTS];
    int highestScoreID;
    int index;

    printf("Enter data for %d students:\n", TOTAL_STUDENTS);
    for (index = 0; index < TOTAL_STUDENTS; index++) {
        printf("\n--- STUDENT %d ---\n", index + 1);
        printf("Enter ID: ");
        scanf("%d", &classroom[index].studentID);
        printf("Enter Score: ");
        scanf("%d", &classroom[index].studentScore);
    }

    highestScoreID = getHighestScoreID(classroom, TOTAL_STUDENTS);

    printf("\n--- STUDENT SCORE REPORT ---\n");
    printf("ID      | Score\n");
    printf("--------|------\n");
    for (index = 0; index < TOTAL_STUDENTS; index++) {
        printf("%-6d | %d\n", classroom[index].studentID, classroom[index].studentScore);
    }

    printf("\nTOP PERFORMER ID: %d\n", highestScoreID);

    return 0;
}
