#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 0 || n == 1) return 0;
    if (n == 2 || n == 3) return 1;

    int i;

    for (i = 2; i <= pow(n, 0.5); i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int n, i = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d prime numbers are: ", n);
    while (n) {
        if (isPrime(i)) {
            printf("%d ", i);
            n--;
        }
        i++;
    }

}
