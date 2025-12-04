#include <stdio.h>

struct Learner {
    char fullName[50];
    int id;
    float grade;
};

int main() {
    int count, index;

    if (scanf("%d", &count) != 1) {
        return 1;
    }

    struct Learner list[count];

    for (index = 0; index < count; index++) {
        if (scanf("%d %f %s", &list[index].id, &list[index].grade, list[index].fullName) != 3) {
            return 1;
        }
    }
    
    // print results
    for (index = 0; index < count; index++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", list[index].id, list[index].fullName, list[index].grade);
    }
    
    return 0;
}
