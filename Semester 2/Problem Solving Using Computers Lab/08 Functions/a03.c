#include <stdio.h>

void toggle(char *c) {
    if (*c >= 'a' || *c <= 'z') *c -= 32;
    else if (*c >= 'A' || *c <= 'Z') *c += 32;
    return;
}

int main() {
    char sent[500];
    printf("Enter sentence: ");
    fgets(sent, sizeof(sent), stdin);

    int i;
    for (i = 0; i < sent[i] != '\0'; i++) toggle(&sent[i]);
    printf("%s\n", sent);

    return 0;
}
