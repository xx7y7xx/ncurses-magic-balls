#include <ncurses.h>
#include <unistd.h>
#include <math.h>

#define DELAY 300
#define PI 3.1415926

int main(int argc, char *argv[]) {

  initscr();
  noecho();
  curs_set(FALSE);

  explode(50, 20);

  endwin();
}

void explode(int cx, int cy) {
  int o = 0, x, y, r = 1;
  while(o < 36000) {
    //clear();

    y = sin(o*PI/180) * r/600 + cy;
    x = cos(o*PI/180) * r/600 + cx;
    mvprintw(y, x, "#");

    refresh();

    usleep(DELAY);
    o++;
    r = r + 1;
  }
}
