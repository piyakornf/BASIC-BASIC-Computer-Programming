#include <stdio.h>

int main() {
    int countStudents, i;
    int id[100], examScore[100], classTotal[100], classAbsent[100];
    float attendanceRate[100];
    int totalPass = 0;
    int totalFail = 0;

    if (scanf("%d", &countStudents) != 1) {
        return 1;
    }

    for (i = 0; i < countStudents; i++) {
        if (scanf("%d %d %d %d", &id[i], &examScore[i], &classTotal[i], &classAbsent[i]) != 4) {
            break;
        }

        attendanceRate[i] = (float)(classTotal[i] - classAbsent[i]) / classTotal[i] * 100.0;
    }

    for (i = 0; i < countStudents; i++) {
        if (attendanceRate[i] >= 75 && examScore[i] >= 50) {
            printf("Student %d: PASS\n", id[i]);
            totalPass++;
        } else if (attendanceRate[i] < 75 && examScore[i] < 50) {
            printf("Student %d: FAIL - Both Score and Attendance\n", id[i]);
            totalFail++;
        } else if (attendanceRate[i] < 75) {
            printf("Student %d: FAIL - Low Attendance(%.2f%%)\n", id[i], attendanceRate[i]);
            totalFail++;
        } else {
            printf("Student %d: FAIL - Low Score\n", id[i]);
            totalFail++;
        }
    }

    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", totalPass);
    printf("Total FAIL: %d\n", totalFail);

    return 0;
}
