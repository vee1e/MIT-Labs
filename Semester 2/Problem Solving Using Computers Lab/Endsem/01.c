#include <stdio.h>
#include <math.h>

void reverseRow(int n, int arr[n]) {
    int i;
    for (i = 0; i < n / 2; i++) {
        int tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }
}

int isPrime(int n) {
    if (n <= 0 || n == 1) return 0;
    if (n == 2 || n == 3) return 1;

    int i;

    for (i = 2; i <= pow(n, 0.5); i++) {
        if (n % i == 0) return 0;
    }

    return 1;

}

int closestPrime(int n) {
    if (isPrime(n)) return n;

    int L = n - 1;
    int R = n + 1;

    while (1) {
        if (isPrime(L)) return L;
        if (isPrime(R)) return R;
        L--;
        R++;
    }
}

int main() {
    int n;
    printf("Enter matrix edge: ");
    scanf("%d", &n);
    int mat[n][n], i, j;

    for (i = 0; i < n; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < n; i++) {
        reverseRow(n, mat[i]);
        for (j = 0; j < n; j++) {
            if (i == j) mat[i][j] *= 2;
            else if (( i + j ) == ( n - 1 )) mat[i][j] = closestPrime(mat[i][j]);
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;

}
