#include <ncurses.h>

int main(void)
{
  char text[] = "Greeting from NCurses!";
  char *t;

  initscr();
  t = text;

  while(*t){
    addch(*t);
    t++;
    refresh();
    napms(100);
  }
  getch();

  endwin();
  return 0;
}
