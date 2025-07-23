#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Maximum number is %d\n", a);
    else if (b > a && b > c)
        printf("Maximum number is %d\n", b);
    else if (c > a && c > b)
        printf("Maximum number is %d\n", c);

    return 0;
}
