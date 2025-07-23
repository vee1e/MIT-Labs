#include <stdio.h>

int main() {
    int num, orig, rem;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    orig = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (orig == rev)
        printf("%d is a palindrome\n", orig);
    else
        printf("%d is not a palindrome\n", orig);

    return 0;
}
