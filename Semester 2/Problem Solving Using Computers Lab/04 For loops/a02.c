#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 200; i++) {
        if (i % 2) continue;
        if (i * 3 == 99) break;
        printf("Number is %d\n", i);
    }
}
