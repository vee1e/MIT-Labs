#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int i, sum = 0;

    for(i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }

    sum == n ? printf("%d is a perfect number\n", n) : printf("%d is not a perfect number\n", n);

    return 0;
}
