#include <stdio.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int c = 0;

    while (1) if (s[c++] == '\0') break;

    printf("String length is %d.\n", c - 1);

    return 0;
}
