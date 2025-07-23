#include <stdio.h>

int main() {
    int seconds;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    float hours = seconds / 3600.0;
    float minutes = seconds / 60.0;
    printf("Hours in %d seconds:   %.2f\n", seconds, hours);
    printf("Minutes in %d seconds: %.2f\n", seconds, minutes);
    printf("Seconds in %d seconds: %d\n", seconds, seconds);
    return 0;
}
