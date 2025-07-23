#include <stdio.h>
#include <math.h>

struct Employee {
    int empno;
    char name[50];
    int age;
    int join_yr;
    int salary;
};

int main() {
    int n, i;
    printf("Enter no. of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    printf("Enter employee number, name, age, joining year and salary: ");
    for (i = 0; i < n; i++) {
        scanf("%d %s %d %d %d", &e[i].empno, e[i].name, &e[i].age, &e[i].join_yr, &e[i].salary);
    }

    for (i = 0; i < n; i++) {
        float hiked_s = e[i].salary * pow(1.2, 55 - e[i].age);
        printf("Retirement year of employee %d is %d and salary would be %f\n", e[i].empno, e[i].join_yr - e[i].age + 55, hiked_s);
    }

    return 0;

}
