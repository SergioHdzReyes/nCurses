#include <ncurses.h>
#include <stdlib.h>
#include "../tools.h"

int main(void)
{
  init_curses(false);
  
  /* colors are okay: continue */
  printw("Colors have been properly initialized.\n");
  printw("Congratulations!\n");
  printw("NCurses reports that you can use %d colors, \n", COLORS);
  printw("and %d color pairs.", COLOR_PAIRS);
  refresh();
  getch();
  
  endwin();
  return 0;
}
