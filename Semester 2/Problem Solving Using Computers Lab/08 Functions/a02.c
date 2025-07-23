#include <stdio.h>

int array_sum(int n, int *arr) {
    int s = 0, i;
    for (i = 0; i < n; i++) s += arr[i];
    return s;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int i, arr[n];

    printf("Enter array: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of %d numbers is %d\n", n, array_sum(n, arr));

    return 0;
}
