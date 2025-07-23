#include <stdio.h>

struct Student {
    char name[50];
    int rno;
    float marks[3];
};

float average(struct Student s) {
    return (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
}

int main() {
    int i, j;
    struct Student students[3];
    for (i = 0; i < 3; i++) {
        printf("Name, roll number, and marks of %d: ", i + 1);
        scanf("%s %d %f %f %f", students[i].name, &students[i].rno, &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (average(students[j]) > average(students[j + 1])) {
                struct Student tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < 3; i++) printf("%s\n", students[i].name);
    return 0;
}

// Input:
// Name, roll number, and marks of 1: Aditya 1 85 96 90
// Name, roll number, and marks of 2: Lakshit 2 84 100 70
// Name, roll number, and marks of 3: Varun 3 72 70 80
// Output:
// Varun
// Lakshit
// Aditya

