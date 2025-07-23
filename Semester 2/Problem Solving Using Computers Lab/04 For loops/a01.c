#include <stdio.h>

int GenRoot(int n) {
    if (n < 10) return n;
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    GenRoot(sum);
}

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Generic root is: %d\n", GenRoot(n));
    return 0;
}
