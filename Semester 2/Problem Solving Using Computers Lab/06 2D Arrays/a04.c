#include <stdio.h>
#include <string.h>

int main() {
    int r, c, i, j, k;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    for (i = 0; i < r; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }

    int rs[r], cs[c], ds = 0;
    memset(rs, 0, sizeof(int) * r);
    memset(cs, 0, sizeof(int) * c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            rs[i] += mat[i][j];
            cs[j] += mat[i][j];
            if (i == j) ds += mat[i][j];
        }
    }

    int isM = 0;

    if (rs[0] == cs[0]) k = rs[0];
    else isM++;

    for (i = 0; i < r; i++) if (rs[i] != k) isM++;
    for (i = 0; i < c; i++) if (cs[i] != k) isM++;

    if (ds != k) isM++;

    if (isM) printf("Matrix is not a magic square.\n");
    else printf("Matrix is a magic square.\n");

    return 0;
}

