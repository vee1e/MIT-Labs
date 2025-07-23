// Read a string S1, remove spaces from it, store it in a value S2 and print S1 and S2.
// Print the number of consonants, vowels and blank spaces in S1.
// Print the smallest and largest word in S1.

#include <stdio.h>

void word(char *S1) {
    int i, j, k, c = 0, w = 0, sizes[100];

    for (i = 0; S1[i] != '\0'; i++) {
        if (S1[i] == ' ' || S1[i + 1] == '\0') {
            sizes[w++] = c;
            c = 0;
        } else {
            c++;
        }
    }

    for (i = 0; i < w; i++) {
        for (j = i; j < w; j++) {
            if (sizes[i] > sizes[j]) {
                int tmp = sizes[j];
                sizes[j] = sizes[i];
                sizes[i] = tmp;
            }
        }
    }

    int sl = sizes[0], bl = sizes[w - 1];
    char sw[256], bw[256];
    c = 0;

    for (i = 0; S1[i] != '\0'; i++) {
        if (S1[i] == ' ' || S1[i + 1] == '\0') {
            if (sl == c) {
                for (k = 0; k < c; k++) sw[k] = S1[i - k - 1];
                sw[c] = '\0';

                for (i = 0; i < c / 2; i++) {
                    char tmp = sw[i];
                    sw[i] = sw[c - i - 1];
                    sw[c - i - 1] = tmp;
                }

                break;
            }
            c = 0;
        } else {
            c++;
        }
    }

    for (i = 0; S1[i] != '\0'; i++) {
        if (S1[i] == ' ' || S1[i + 1] == '\0') {
            if (bl == c) {
                for (k = 0; k < c; k++) bw[k] = S1[i - k - 1];
                bw[c] = '\0';

                for (i = 0; i < c / 2; i++) {
                    char tmp = bw[i];
                    bw[i] = bw[c - i - 1];
                    bw[c - i - 1] = tmp;
                }

                break;
            }
            c = 0;
        } else {
            c++;
        }
    }

    printf("Shortest word: %s\n", sw);
    printf("Longest word: %s\n", bw);

    return;


}

int main() {
    char S1[256], S2[256];
    int i, C = 0;

    printf("Input sentence: ");
    fgets(S1, sizeof(S1), stdin);

    for (i = 0; S1[i] != '\0'; i++) {
        if (S1[i] != ' ') S2[C++] = S1[i];
    }

    S2[C] = '\0';

    int k, v = 0, s = 0, c = 0;

    for (i = 0; S1[i] != '\0'; i++) {
        k = S1[i];
        if (k >= 'A' && k <= 'Z') k += 32;

        if (k == ' ') s++;
        else if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u') v++;
        else if (k != '\n' && k >= 'a' && k <= 'z') c++;
    }

    printf("Input sentence: %s", S1);
    printf("Modified sentence: %s", S2);
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
    printf("Number of blank spaces: %d\n", s);
    word(S1);

    return 0;
}

