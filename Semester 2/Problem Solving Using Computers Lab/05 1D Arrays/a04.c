#include <stdio.h>

int main() {
    int n, i, s = 0;
    printf("Enter number of digits: ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) s = 10 * s + num[i];
    printf("Number is %d\n", s);

    return 0;
}
