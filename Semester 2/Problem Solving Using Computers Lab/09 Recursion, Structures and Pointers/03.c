#include <stdio.h>

int findMax(int *arr, int size) {
    int i, max = *arr;
    for (i = 1; i < size; i++) if (*(arr + i) > max) max = *(arr + i);
    return max;
}

int main() {
    int n, i;
    printf("Number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Max number in array: %d\n", findMax(arr, n));
    return 0;
}

// Input:
// Number of elements: 3
// Element 1: 9
// Element 2: 390
// Element 3: 1002
// Output:
// Max number in array: 1002

