// Input a matrix of order MxN, and display it in matrix format
// Create a function “func()” and read the 2D array into it. Now modify the matrix such that row_i=row_i + row_j and print the modified matrix.
// Now in the main, further modify the modified matrix in such a way that, the largest element in a row is replaced by the sum of the duplicate elements in the row. If no duplicate elements, then retain the original value.

#include <stdio.h>
#include <string.h>

void func(int m, int n, int mat[m][n]) {
    int i, j;

    for (i = 0; i < m - 1; i++) {
        for (j = 0; j < n; j++) {
            mat[i + 1][j] += mat[i][j];
        }
    }

    return;
}

void replaceMax(int n, int arr[n]) {
    int i, j, k = 0, sum = 0, max = 0, arr2[n], dup[n];

    for (i = 0; i < n; i++) arr2[i] = arr[i];
    for (i = 0; i < n; i++) if (max < arr[i]) max = arr[i];

    memset(dup, -2, sizeof(int) * n);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (arr2[i] > arr2[j]) {
                int tmp = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (arr2[i - 1] == arr2[i] || arr2[i] == arr2[i + 1]) {
            dup[k++] = arr2[i];
            sum += arr2[i];
        }
    }

    for (i = 0; i < n; i++) if (arr[i] == max && sum != 0) arr[i] = sum;

    return;
}

int main() {
    int i, j, m, n;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    int mat[m][n];

    for (i = 0; i < m; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    }

    func(m, n, mat);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }

    for (i = 0; i < m; i++) replaceMax(n, mat[i]);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;

}
