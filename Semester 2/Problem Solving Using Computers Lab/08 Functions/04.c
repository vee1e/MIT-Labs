#include <stdio.h>

int cornerSum(int r, int c, int mat[r][c]) {
    return mat[0][0] + mat[r - 1][c - 1] + mat[0][c - 1] + mat[r - 1][0];
}

int main() {
    int r, c;
    printf("Matrix rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    int i, j;

    for (i = 0; i < r; i++) {
        printf("Row %d: ", c, i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    printf("Corner sum is %d\n", cornerSum(r, c, mat));

    return 0;
}

