#include <stdio.h>

int main() {
    int twenty, ten, five, fifty;
    printf("Enter the number of twenty, ten, five rupee notes and fifty paise coins: ");
    scanf("%d %d %d %d", &twenty, &ten, &five, &fifty);
    float total = 20 * twenty + 10 * ten + 5 * five + 0.5 * fifty;
    printf("There are %.2f rupees in total\n", total);
    return 0;
}
