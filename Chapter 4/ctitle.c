#include <ncurses.h>
#include <string.h>

void center(int row, char *title);

void main(void)
{
  initscr();

  center(1, "Penguin Soccer Finals");
  center(5, "Cattle Dung Samples from Temecula");
  center(7, "Catatonic Theater");
  center(9, "Why Do Ions Hate Each Other?");
  getch();

  endwin();
}

void center(int row, char *title)
{
  int len, indent, y, width;

  getmaxyx(stdscr, y, width);

  len = strlen(title);
  indent = width - len;
  indent /= 2;

  mvaddstr(row, indent, title);
  refresh();
}
