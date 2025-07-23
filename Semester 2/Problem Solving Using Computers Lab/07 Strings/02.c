#include <stdio.h>

int main() {
    char s[1024];
    printf("String: ");
    fgets(s, sizeof(s), stdin);

    int i;

    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }

    printf("%s\n", s);

    return 0;
}
