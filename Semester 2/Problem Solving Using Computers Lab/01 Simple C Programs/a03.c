#include <stdio.h>

int main() {
    // Part (a)
    int u, t, a;
    printf("Enter the initial speed, time period, and acceleration: ");
    scanf("%d %d %d", &u, &t, &a);
    float dist = u * t + 0.5 * a * t * t;
    printf("The total distance coverered is %f\n", dist);

    // Part (b)
    int b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("The value of a^2 + 2ab + b^2 is %d\n", (a + b) * (a + b));
    return 0;
}
