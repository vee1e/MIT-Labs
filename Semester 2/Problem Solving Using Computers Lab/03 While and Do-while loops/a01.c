#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &num);

    int orig = num;

    while (num != 0) {
        int dig = num % 10;
        num /= 10;
        sum += tgamma(dig + 1);
    }

    printf("%d %s a strong number\n", orig, (sum == orig) ? "is" : "is not");

    return 0;
}
