#include <ncurses.h>
#include "../tools.h"

int main(void)
{
  init_curses(true);

  init_pair(1, COLOR_WHITE, COLOR_BLUE);
  bkgd( COLOR_PAIR(1) | '.');
  refresh();
  getch();

  endwin();
  return 0;
}
