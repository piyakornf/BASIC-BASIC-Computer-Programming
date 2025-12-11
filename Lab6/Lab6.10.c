#include <stdio.h>

struct Student {
    int id;
    int score;
    char grade;
};

void assignGrade(struct Student *student) {
    if (student->score >= 80) {
        student->grade = 'A';
    } else if (student->score >= 70) {
        student->grade = 'B';
    } else if (student->score >= 60) {
        student->grade = 'C';
    } else if (student->score >= 50) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

void showMenu() {
    printf("\n--- STUDENT RECORD MENU ---\n");
    printf("1. Input/Update Student Data\n");
    printf("2. View Student Report\n");
    printf("3. Exit Program\n");
    printf("Enter choice: ");
}

int main() {
    struct Student studentData = {0, 0, 'U'};
    int menuChoice;

    do {
        showMenu();
        scanf("%d", &menuChoice);

        switch (menuChoice) {
            case 1:
                printf("Enter Student ID: ");
                scanf("%d", &studentData.id);

                printf("Enter Score (0-100): ");
                scanf("%d", &studentData.score);

                assignGrade(&studentData);

                printf("Data updated. Grade assigned.\n");
                break;

            case 2:
                if (studentData.id == 0) {
                    printf("No student data has been entered yet (ID is 0).\n");
                } else {
                    printf("\n--- STUDENT REPORT ---\n");
                    printf("ID: %d\n", studentData.id);
                    printf("Score: %d\n", studentData.score);
                    printf("Grade: %c\n", studentData.grade);
                }
                break;

            case 3:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (menuChoice != 3);

    return 0;
}
