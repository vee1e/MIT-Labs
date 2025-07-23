#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < r; i++) {
        for (j = i + 1; j < c; j++) {
            if (mat[i][j] != 0) {
                printf("Matrix is not lower triangular.\n");
                return 0;
            }
        }
    }

    printf("Matrix is lower triangular.\n");
    return 0;
}
