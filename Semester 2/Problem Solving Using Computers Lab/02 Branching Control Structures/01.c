#include <stdio.h>

int main() {
    int i;
    printf("Enter your number: ");
    scanf("%d", &i);
    if (!(i % 2)) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    return 0;
}
