#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isDuplicate(char *word, char **uniqueWords, int count) {
    for (int i = 0; i < count; i++) if (strcmp(word, uniqueWords[i]) == 0) return 1;
    return 0;
}

int main() {
    char inputString[] = "This is is a sample sample string with repeated words words";
    char *word;
    char *uniqueWords[100];
    int count = 0;

    word = strtok(inputString, " ");

    while (word != NULL) {
        for (int i = 0; word[i]; i++) word[i] = tolower(word[i]);
        if (!isDuplicate(word, uniqueWords, count)) {
            uniqueWords[count] = strdup(word);
            count++;
        }
        word = strtok(NULL, " ");
    }

    printf("String after removing duplicates: ");

    for (int i = 0; i < count; i++) {
        printf("%s ", uniqueWords[i]);
        free(uniqueWords[i]);
    }

    printf("\n");

    return 0;
}

