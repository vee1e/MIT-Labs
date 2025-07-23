#include <stdio.h>
#include <ncurses.h>

#define MAX_PASSWORD_LENGTH 50

int main() {
    char password[MAX_PASSWORD_LENGTH + 1];
    int i = 0;
    int ch;

    initscr();
    noecho();

    printw("Enter your password: ");

    while ((ch = getch()) != '\n' && i < MAX_PASSWORD_LENGTH) {
        if (ch == '\b' && i > 0) {
            i--;
            password[i] = '\0';
            printw("\b \b");
        } else {
            password[i++] = ch;
            printw("*");
        }
    }
    password[i] = '\0';

    endwin();

    printf("\nYour password is: %s\n", password);

    return 0;
}

