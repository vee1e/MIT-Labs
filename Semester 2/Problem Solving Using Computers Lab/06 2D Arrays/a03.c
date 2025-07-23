#include <stdio.h>
#include <string.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    int rs[r], cs[c];
    memset(rs, 0, sizeof(int) * r);
    memset(cs, 0, sizeof(int) * c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            rs[i] += mat[i][j];
            cs[j] += mat[i][j];
        }
    }

    printf("Row sums: ");
    for (i = 0; i < r; i++) printf("%d ", rs[i]);
    printf("\nColumn sums: ");
    for (i = 0; i < r; i++) printf("%d ", cs[i]);

    return 0;
}
