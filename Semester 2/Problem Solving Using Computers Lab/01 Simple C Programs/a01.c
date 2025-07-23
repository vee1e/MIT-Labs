#include <stdio.h>

int main() {
    float days;
    printf("Enter days: ");
    scanf("%f", &days);
    float years = days / 365.25;
    float weeks = days / 7.0;
    printf("Years in %.2f days: %.2f\n", days, years);
    printf("Weeks in %.2f days: %.2f\n", days, weeks);
    printf("Days in %.2f days:  %.2f\n", days, days);
    return 0;
}
