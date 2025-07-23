#include <stdio.h>
#include <math.h>

int main() {
    float p, n, r;
    scanf("%f %f %f",&p, &n, &r);
    float si = (p * n * r) / 100;
    float ci = p * pow(1 + (r / 100), n) - p;
    printf("%f\n%f\n", si, ci);
    return 0;
}
