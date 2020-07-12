#include <ncurses.h>

void main(void)
{
  initscr();

  addstr("Attention!\n");
  beep();
  refresh();
  getch();
  addstr("I said, ATTENTION!\n");
  flash();
  refresh();
  getch();
  endwin();
}
