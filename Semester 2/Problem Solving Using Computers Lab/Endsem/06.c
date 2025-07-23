// Read a matrix of order M x M, interchange the diagonals of the matrices and print in matrix format.
// Write a function addition() to add interchanged diagonal matrices
// Print the count of the odd and even numbers in resultant matrix

#include <stdio.h>

void addition(int m, int mat[m][m]) {
    int i, arr[m];
    for (i = 0; i < m; i++) {
        arr[i] = mat[i][m - i - 1] + mat[i][i];
    }

    printf("Sum of diagonals is: ");
    for (i = 0; i < m; i++) printf("%d ", arr[i]);
    printf("\n");

    return;
}

int main() {
    int m, i, j;
    printf("Enter order: ");
    scanf("%d", &m);

    int mat[m][m];

    for (i = 0; i < m; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < m; j++) scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < m; i++) {
        int tmp = mat[i][m - i - 1];
        mat[i][m - i - 1] = mat[i][i];
        mat[i][i] = tmp;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }

    int o, e;

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] % 2) o++;
            else e++;
        }
    }

    addition(m, mat);

    printf("Number of odd numbers: %d\nNumber of even numbers: %d", o, e);

}
