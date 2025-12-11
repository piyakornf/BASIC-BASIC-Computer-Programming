#include <stdio.h>
#define TOTAL_STUDENTS 4

struct StudentInfo {
    int studentID;
};

int isIDFound(struct StudentInfo studentList[], int listSize, int targetID) {
    for (int index = 0; index < listSize; index++) {
        if (studentList[index].studentID == targetID) {
            return 1;   // ID found
        }
    }
    return 0;   // ID not found
}

int main() {
    struct StudentInfo idDatabase[TOTAL_STUDENTS];
    int searchID;
    int isFound;
    int index;
    
    printf("Enter IDs for %d students:\n", TOTAL_STUDENTS);
    for (index = 0; index < TOTAL_STUDENTS; index++) {
        printf("Student %d ID: ", index + 1);
        scanf("%d", &idDatabase[index].studentID);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (index = 0; index < TOTAL_STUDENTS; index++) {
        printf("%d ", idDatabase[index].studentID);
    }
    printf("\n");
    printf("Search ID: %d\n", searchID);

    isFound = isIDFound(idDatabase, TOTAL_STUDENTS, searchID);

    if (isFound == 0) {
        printf("ID NOT FOUND in the system");
    } else {
        printf("ID FOUND in the system");
    }

    return 0;
}
