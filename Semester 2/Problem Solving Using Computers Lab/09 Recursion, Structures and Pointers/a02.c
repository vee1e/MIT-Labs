#include <stdio.h>

int prod(int a, int b) {
    if (b == 1) return a;
    return a + prod(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter numbers to multiply: ");
    scanf("%d %d", &a, &b);
    printf("Product is %d", prod(a, b));

    return 0;
}
