// Write a program to read and display a matrix of the order M * N
// Find and display the no.of prime numbers present in the matrix
// Write a function SumOfDigits() to read and return a value to display a new modified matrix in which each element is the sum of digits of the elements of the original matrix

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

int SumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int i, j, r, c, p = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    printf("The primes in the matrix are: ");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (isPrime(mat[i][j])) {
                p++;
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\n");

    for (i = 0; i < r; i++) for (j = 0; j < c; j++) mat[i][j] = SumOfDigits(mat[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
