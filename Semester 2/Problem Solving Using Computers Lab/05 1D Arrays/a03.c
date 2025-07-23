#include <stdio.h>

int Del(int element, int *arr, int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    return n;
}

int main() {
    int n, i, e;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter number to delete: ");
    scanf("%d", &e);

    int c = Del(i - c++, arr, n);

    printf("Array after: ");
    for (i = 0; i <= c; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
