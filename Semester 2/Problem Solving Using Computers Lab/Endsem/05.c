// Read a list of names and print the names in ascending order
// Replace every character of the name by the next ASCII
// Create a function count() that counts the number of vowels and lowercase letters in each name

#include <stdio.h>

void count(char *str) {
    int v = 0, l = 0, i;

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') l++;
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') v++;
    }

    printf("Number of vowels is: %d and lowercase letters is %d\n", v, l);

    return;
}

int main() {
    int n, i, j;
    printf("Enter number of names: ");
    scanf("%d", &n);

    char names[n][50];

    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", &names[i]);
    }

    for (i = 0; i < n; i++) for (j = 0; names[i][j] != '\0'; j++) names[i][j]++;

    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    for (i = 0; i < n; i++) count(names[i]);

    return 0;
}
