#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    float root_1, root_2;
    float D = (b * b) - (4 * a * c);

    switch (D == 0) {
    case 1:
        root_1 = root_2 = (float) -b / (2 * a);
        break;
    case 0:
        switch (D < 0) {
        case 1:
            printf("The roots are %.2f + i%.2f and %.2f + i%.2f", -b / (2.0 * a), sqrt(-D) / (2.0 * a), -b / (2.0 * a), sqrt(-D) / (2.0 * a));
            return 0;
        case 0:
            root_1 = (-b + sqrt(D)) / (2 * a);
            root_2 = (-b - sqrt(D)) / (2 * a);
            break;
        }
    }
    printf("The roots are %.2f and %.2f\n", root_1, root_2);
    return 0;
}
