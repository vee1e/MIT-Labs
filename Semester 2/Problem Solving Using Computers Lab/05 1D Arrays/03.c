#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1], i;
    for (i = 0; i < n; i++) {
        int ele;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int ele, pos;
    printf("Enter the element to insert and the index to insert it in: ");
    scanf("%d %d", &ele, &pos);

    for (i = n; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = ele;

    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
