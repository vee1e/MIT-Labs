#include <stdio.h>

int main() {
    char sent[1024], del[100];
    printf("Enter sentence: ");
    fgets(sent, sizeof(sent), stdin);

    printf("Word to delete: ");
    scanf("%s", del);

    int i, j;

    for (i = 0; sent[i] != '\0'; i++) {
        for (j = 0; sent[i + j] == del[j] && del[j] != '\0'; j++);
        if (del[j] == '\0') {
            while (sent[i + j] != '\0') {
                sent[i] = sent[i + j];
                i++;
            }
            sent[i] = '\0';
        }
    }

    printf("%s\n", sent);

    return 0;
}

