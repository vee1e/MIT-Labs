#include <stdio.h>

int fact(int n) {
    int res = 1, i;
    for (i = 1; i <= n; i++) res *= i;
    return res;
}

int main() {
    int N, R;
    printf("Enter N and R: ");
    scanf("%d %d", &N, &R);

    float nCr = fact(N) / (fact(R) * fact(N - R));

    printf("nCr is %.2f", nCr);

	return 0;
}
