#include <stdio.h>

int main() {
    int n;
    printf("Enter matrix size: ");
    scanf("%d", &n);

    int mat[n][n];
    int i, j;

    for (i = 0; i < n; i++) {
        printf("Enter elements in row %d: ", i  + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        int tmp = mat[i][i];
        mat[i][i] = mat[i][n - i - 1];
        mat[i][n - i - 1] = tmp;
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

