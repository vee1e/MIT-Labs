#include <stdio.h>

int main() {
    int days;
    float fine;
    printf("Enter number of days the book was late: ");
    scanf("%d", &days);

    if (days == 5) fine = 0.5;
    else if (days >= 6 && days <= 10) fine = 1;
    else if (days > 10) fine = 5;
    else fine = 10;

    printf("The fine you need to pay is %.2f rupees", fine);

    return 0;
}
