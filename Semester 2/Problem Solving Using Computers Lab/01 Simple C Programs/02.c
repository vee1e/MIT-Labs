#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int diff = a - b;
    int mul = a * b;
    int quo = a / b;
    printf("%d\n%d\n%d\n%d\n", sum, diff, mul, quo);
    return 0;
}
