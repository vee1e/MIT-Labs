#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter matrix size: ");
    scanf("%d", &n);

    int mat[n][n], trace = 0, i, j;
    float norm = 0.0;

    for (i = 0; i < n; i++) {
        printf("Enter elements in row %d: ", i + 1);
        for (j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) trace += mat[i][j];
            norm += pow(mat[i][j], 2);
        }
    }

    norm = pow(norm, 0.5);
    printf("Trace is %d and norm is %.2f\n", trace, norm);

    return 0;
}
