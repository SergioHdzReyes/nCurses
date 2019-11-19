#include <stdlib.h>

void bomb(char *msg)
{
  endwin();
  puts(msg);
  exit(1);
}


void init_curses(bool turn_color)
{
  initscr();

  /* first test for color ability to the terminal */
  if (!has_colors())
    bomb("Terminal cannot do colors\n");

  /* next attemp to initialize curses colors */
  if (start_color() != OK)
    bomb("Unable to start colors.\n");

  if (turn_color) {
    start_color();
    if (!can_change_color())
      addstr("This probably won't work, but anyway:\n");
  }
}
