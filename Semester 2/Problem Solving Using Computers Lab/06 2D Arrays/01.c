#include <stdio.h>

int main() {
    int r, c;
    printf("Enter matrix rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[c][r];
    int i, j;

    for (i = 0; i < r; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            if (mat[j][i] != mat[i][j]) {
                printf("Matrix is not symmetrical.\n");
                return 0;
            }
        }
    }

    printf("Matrix is symmetrical.\n");

	return 0;
}
