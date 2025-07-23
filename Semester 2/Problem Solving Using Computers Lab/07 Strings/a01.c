#include <stdio.h>
#include <string.h>

int main() {
    char mainString[] = "This is the main string";
    char subString[] = "main";

    char *result = strstr(mainString, subString);

    if (result != NULL) printf("'%s' found at index %ld\n", subString, result - mainString);
    else printf("'%s' not found\n", subString);

    return 0;
}

