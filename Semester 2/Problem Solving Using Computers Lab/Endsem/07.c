// Read a 2D array and print all the odd numbers along with their position
// calculate the number of even numbers in the array and print it. if the number of even numbers in the array is
// i.) even then change the primary diagnonal to the largest prime number in the array.
// ii.) odd then change the secondary diagonal to the smallest prime number in the array.
// Take the array obtained from Part (B) and print out all the elements without any duplication

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
    int r, c, i, j, e = 0, p = 0;
    printf("Rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    for (i = 0; i < r; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    printf("Odd numbers and their positions are:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) if (mat[i][j] % 2) printf("%d %d %d\n", mat[i][j], i, j);

    printf("Even numbers and their positions are:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++)
        if (mat[i][j] % 2 == 0) {
            printf("%d %d %d\n", mat[i][j], i, j);
            e++;
        }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (isPrime(mat[i][j])) {
                p++;
            }
        }
    }

    int primes[p], pi = 0;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (isPrime(mat[i][j])) {
                primes[pi++] = mat[i][j];
            }
        }
    }

    for (i = 0; i < p; i++) {
        for (j = i; j < p; j++) {
            if (primes[i] > primes[j]) {
                int tmp = primes[j];
                primes[j] = primes[i];
                primes[i] = tmp;
            }
        }
    }

    int sp = primes[0];
    int lp = primes[p - 1];

    if (e % 2) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i + j == r - 1) mat[i][j] = sp;
            }
        }
    } else {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i == j) mat[i][j] = lp;
            }
        }
    }

    printf("\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int k;
    int dup[r * c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isDup = 0;

            for (int k = 0; k < i * c + j; k++) {
                if (mat[i][j] == dup[k]) {
                    isDup = 1;
                    break;
                }
            }

            if (!isDup) {
                printf("%d ", mat[i][j]);
                dup[i * c + j] = mat[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;

}
