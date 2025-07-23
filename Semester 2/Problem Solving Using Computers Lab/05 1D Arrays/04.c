#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++) {
        int ele;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter index of element to delete: ");
    scanf("%d", &pos);

    for (i = pos; i <= n; i++) {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

