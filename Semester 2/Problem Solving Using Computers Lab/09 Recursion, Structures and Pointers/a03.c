#include <stdio.h>

int freq(char *str, char *sub) {
    int i, j, c = 0;
    for (i = 0; str[i] != '\0'; i++) {
        int isW = 1;
        for (j = 0; sub[j] != '\0'; j++) if (str[i + j] != sub[j]) isW = 0;
        if (isW) c++;
    }
    return c;
}

int main() {
    char str[200], sub[50];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter sub string: ");
    scanf("%s", sub);

    printf("%s occurs %d times.", sub, freq(str, sub));

    return 0;
}
