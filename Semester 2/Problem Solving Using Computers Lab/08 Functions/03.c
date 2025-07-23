#include <stdio.h>
#include <string.h>

void isPalin(char s[50]) {
    int i;

    for (i = 0; i < strlen(s) / 2; i++) {
        if (s[i] != s[strlen(s) - 1 - i]) {
            printf("String is not a palindrome.\n");
            return;
        }
    }
    printf("String is a palindrome.\n");
    return;
}

int main() {
    char word[50];
    printf("Enter word: ");
    scanf("%s", word);
    isPalin(word);

    return 0;
}

