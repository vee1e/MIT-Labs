#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
