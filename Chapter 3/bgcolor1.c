#include <ncurses.h>
#include "../tools.h"

int main(void)
{
  init_curses(true);

  init_pair(1, COLOR_YELLOW, COLOR_BLUE);
  bkgd( COLOR_PAIR(1) | '.');
  addstr("So this is what a color screen looks like?\n");
  refresh();
  getch();

  endwin();
  return 0;
}
