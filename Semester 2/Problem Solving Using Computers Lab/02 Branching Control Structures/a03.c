#include <stdio.h>

int main() {
    int x, Y;
    printf("Enter x: ");
    scanf("%d", &x);

    if (x > 0) Y = 1;
    else if (x < 0) Y = -1;
    else Y = 0;

    printf("The value of 'Y' is %d\n", Y);

    return 0;
}
