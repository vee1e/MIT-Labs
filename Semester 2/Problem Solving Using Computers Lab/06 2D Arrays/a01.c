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

    int r1, r2, c1, c2;

    printf("Enter rows to interchange by index: ");
    scanf("%d %d", &r1, &r2);

    printf("Enter columns to interchange by index: ");
    scanf("%d %d", &c1, &c2);

    for (i = 0; i < c; i++) {
        int tmp = mat[r1][i];
        mat[r1][i] = mat[r2][i];
        mat[r2][i] = tmp;
    }

    for (i = 0; i < r; i++) {
        int tmp = mat[c1][i];
        mat[c1][i] = mat[c2][i];
        mat[c2][i] = tmp;
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
