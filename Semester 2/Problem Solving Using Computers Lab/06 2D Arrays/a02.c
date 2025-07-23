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

    int e, C = 0;

    printf("Enter element to search for: ");
    scanf("%d", &e);

    for (i = 0; i < r; i++) for (j = 0; j < c; j++) if (mat[i][j] == e) C++;
    printf("Number of occurences of %d: %d\n", e, C);

    return 0;
}
