#include <stdio.h>

int main() {
    float r, area, vol;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 4 * 3.14 * r * r;
    vol = (4.0 / 3) * 3.14 * r * r * r;
    printf("%f\n%f\n", area, vol);
    return 0;
}
