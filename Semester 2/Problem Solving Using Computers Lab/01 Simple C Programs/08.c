#include <stdio.h>

int main() {
    float a = 30, b = 10, c = 5, d = 15;
    float p, q, r, s;
    p = (a + b) * c / d;
    q = ((a + b) * c) / d;
    r = a + (b * c) / d;
    s =
    (a + b) * (c / d);
    printf("%f\n%f\n%f\n%f\n", p, q, r, s);
    return 0;
}
