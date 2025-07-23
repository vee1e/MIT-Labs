#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 0 || n == 1) return 0;
    if (n == 2 || n == 3) return 1;

    int i;

    for (i = 2; i <= pow(n, 0.5); i++) {
        if (n % i == 0) return 0;
    }

    return 1;

}

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 0 ; i < n; i++) if (isPrime(arr[i])) printf("%d ", arr[i]);

    return 0;
}
