#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf("Enter limits: ");
    scanf("%d %d", &a, &b);

    while (a < b) {
        int i = 2, isPrime = 1;
        while (i <= sqrt(a)) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            } i++;
        }
        if (isPrime)
            printf("%d\n", a);
        a++;
    }
    return 0;
}
