#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int min = 0, max = 0;

    int i, arr[n];
    for (i = 0; i < n; i++) {
        int ele;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum is %d and minimum is %d", max, min);

    return 0;
}
