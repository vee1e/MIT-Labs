#include <stdio.h>

int largest(int arr[], int arrlen) {
    int MAX = 0, i;
    for (i = 0; i < arrlen; i++) {
        if (arr[i] > MAX) MAX = arr[i];
    }
    return MAX;
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

    printf("Largest element is %d", largest(arr, n));

    return 0;
}

