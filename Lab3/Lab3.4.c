#include <stdio.h>

struct Learner {
    char fullName[50];
    int id;
    float grade;
};

int main() {
    int count, index;
    int passed = 0, failed = 0;

    // Read number of students
    if (scanf("%d", &count) != 1) {
        return 1;
    }

    struct Learner group[count];

    // Read info (id, grade, fullName)
    for (index = 0; index < count; index++) {
        if (scanf("%d %f %s", &group[index].id, &group[index].grade, group[index].fullName) != 3) {
            return 1;
        }
    }

    // Count pass / fail
    for (index = 0; index < count; index++) {
        if (group[index].grade >= 60.0) {
            passed++;
        } else {
            failed++;
        }
    }

    // Output
    printf("Pass count: %d\n", passed);
    printf("Fail count: %d\n", failed);

    return 0;
}