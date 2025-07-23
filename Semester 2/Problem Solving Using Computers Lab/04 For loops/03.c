#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() {
    int n;
    float x;
    float sum = 0.0, minus = 0;
    printf("Enter x in degrees and the number of terms: ");
    scanf("%f %d", &x, &n);

    float term;
    int i, j;

    x *= PI / 180;

    for (i = 1; i <= n; i += 2) {
        term = pow(x, i) * pow(-1.0, minus) / tgamma(i + 1);
        minus = !minus;
        sum += term;
    }

    printf("The value of sin(%f) is %f\n",  x, sum);

    return 0;
}
