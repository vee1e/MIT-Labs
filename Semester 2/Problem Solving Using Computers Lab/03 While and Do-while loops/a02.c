#include <stdio.h>

int main() {
    // Example in while loop

    int num1 = 0;

    while (1) { // Infinite loop
        if (num1 == 10) break; // Breaks when num exceeds 10
        printf("%d\n", num1);
        num1++;
    }

    printf("\n");

    // Example in do-while loop

    int num2 = 0;

    do {
        if (num2 == 30) break; // Breaks when num exceeds 30
        printf("%d\n", num2);
        num2++;
    } while (1); // Infinite loop

    return 0;
}
