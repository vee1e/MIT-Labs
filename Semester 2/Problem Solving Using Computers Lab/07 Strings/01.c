#include <stdio.h>

int main() {
    char s[1024];
    printf("String: ");
    fgets(s, sizeof(s), stdin);

    int i, w = 1;

    for (i = 0; i < strlen(s); i++) if (s[i] == ' ') w++;

    printf("%d words in string.\n", w);

	return 0;
}
