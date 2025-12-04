#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;
    float totalScore = 0.0, avgScore;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    if (N == 0) {
        printf("Average Score: 0.00");
        return 0;
    }

    struct Student students[N];

    for (i = 0; i < N; i++) {
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            return 1;
        }

        // total score
        totalScore += students[i].score;
    }

    avgScore = totalScore / N;

    printf("Average Score: %.2f", avgScore);
    
    return 0;
}
