#include <stdio.h>

int main() {
    int n, i, s;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search for: ");
    scanf("%d", &s);

    for (i = 0; i < n; i++) {
        if (arr[i] == s) {
            printf("%d is located at index %d\n", s, i);
            return 0;
        }
    }

    printf("Element not found.\n");
    return 0;
}
