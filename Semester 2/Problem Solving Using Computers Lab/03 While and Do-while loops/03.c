#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    int orig = num;

    while (num != 0) {
        int k = num % 10;
        num /= 10;
        sum += k * k * k;
    }

    if (sum == orig)
        printf("%d is an Armstrong number\n", orig);
    else
        printf("%d is not an Armstrong number\n", orig);

    return 0;
}
