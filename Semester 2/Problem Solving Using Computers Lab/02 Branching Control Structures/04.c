#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    ((a < b) && (a < c)) ? printf("%d is the smallest\n", a) :
    (b < c) ? printf("%d is smallest\n", b) :
    printf("%d is smallest", c);
    return 0;
}
