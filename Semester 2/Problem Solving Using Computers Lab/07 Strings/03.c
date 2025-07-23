#include <stdio.h>

int main() {
    char s[1024];
    printf("String: ");
    fgets(s, sizeof(s), stdin);
    int i;

    for (i = 0; i < strlen(s) / 2; i++) {
        if (s[i] != s[strlen(s) - 2 - i]) {
            printf("String is not a palindrome.\n");
            return 0;
        }
    }

    printf("String is a palindrome.\n");
    return 0;
}
