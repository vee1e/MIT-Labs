#include <stdio.h>

int main() {
    int i, j, k, r1, r2, c1, c2, n;

    printf("Enter both matrix rows and columns: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    int mat1[c1][r1], mat2[c2][r2], prod[r1][r1];

    if (r1 != c2) return 1;

    for (i = 0; i < r1; i++) {
        printf("Matrix 1 row %d: ", i + 1);
        for (j = 0; j < c1; j++) scanf("%d", &mat1[i][j]);
    }

    for (i = 0; i < r2; i++) {
        printf("Matrix 2 row %d: ", i + 1);
        for (j = 0; j < c2; j++) scanf("%d", &mat2[i][j]);
    }

    printf("Product of the two matrices is:\n");

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < r2; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
