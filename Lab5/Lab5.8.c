#include <stdio.h>

// Structure to store student information and scores
struct Student {
    int studentId;
    int math;
    int science;
    int english;
    int total;
};

// Function to determine the final letter grade based on total score
char getLetterGrade(int total);

// Function to calculate the average score
void getAverageScore(int total, float *average);

int main() {
    struct Student studentData;
    char grade;
    float average;

    printf("Enter Student ID: ");
    scanf("%d", &studentData.studentId);

    printf("Enter Math Score (out of 100): ");
    scanf("%d", &studentData.math);

    printf("Enter Science Score (out of 100): ");
    scanf("%d", &studentData.science);

    printf("Enter English Score (out of 100): ");
    scanf("%d", &studentData.english);

    // Calculate total score from all 3 subjects
    studentData.total = studentData.math + studentData.science + studentData.english;

    // Calculate average score (total divided by 3 subjects)
    getAverageScore(studentData.total, &average);

    // Determine grade from overall total score
    grade = getLetterGrade(studentData.total);

    printf("\n--- STUDENT ACADEMIC REPORT ---\n");
    printf("Student ID: %d\n", studentData.studentId);
    printf("Math: %d, Science: %d, English: %d\n",
        studentData.math, studentData.science, studentData.english);
    printf("Total Score: %d\n", studentData.total);
    printf("Average Score: %.2f\n", average);
    printf("Final Grade: %c\n", grade);

    return 0;
}

// Calculate Grade
char getLetterGrade(int total) {
    if (total >= 250) {
        return 'A';
    } else if (total >= 200) {
        return 'B';
    } else {
        return 'C';
    }
}

// Calculate Average (total / 3 subjects)
void getAverageScore(int total, float *average) {
    *average = (float)total / 3;
}
