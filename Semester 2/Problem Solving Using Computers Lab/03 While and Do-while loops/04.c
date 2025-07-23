#include <stdio.h>
#include <math.h>

int main() {
    int p = 0, c = 0;
    printf("Enter your numbers:\n");

    int num;

     while (num != -1) {

        int isPrime = 1;
        scanf("%d", &num);

        int i = 2;

        while (i < sqrt(num)); {
            if (num % i == 0) {
                isPrime = 0;
                c++;
            }
            i++;
        }

        if (num == 2) {
            p++;
            c--;
        }

        if (isPrime && num != 1) p++;
    } ;

    printf("Number of primes: %d\n", p);
    printf("Number of composites: %d\n", c);

    return 0;
}
