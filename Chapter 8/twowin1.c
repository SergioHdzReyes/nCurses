//
// Created by sergio on 04/11/21.
//

#include <ncurses.h>

int main(void)
{
    WINDOW *two;    // Pointer to new window

    initscr();

    addstr("This is the original window, stdscr.\n");
    refresh();
    getch();

    two = newwin(0, 0, 0, 0);
    if (two == NULL) {
        addstr("Unable to allocate memory for new window.");
        endwin();
        return(1);
    }
    waddstr(two, "This is the new window created!\n");
    wrefresh(two);
    getch();

    endwin();
    return 0;
}