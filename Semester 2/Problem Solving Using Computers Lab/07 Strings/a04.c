#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, charCount = 0, digitCount = 0, digitSum = 0;

    printf("Enter an alphanumeric string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            charCount++;
        else if (isdigit(str[i])) {
            digitCount++;
            digitSum += str[i] - '0';
        }
    }

    printf("Number of characters: %d\n", charCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Sum of all digits: %d\n", digitSum);

    return 0;
}

