#include <stdio.h>

typedef struct {
  int x, y;
} Point;

/* TODO: return the squared distance between a and b. */
int dist2(Point a, Point b) {
  int result = ((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y));
  return result;
}

int main(void) {
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  Point a = {x1, y1};
  Point b = {x2, y2};
  /* TODO: build a from (x1, y1) and b from (x2, y2). */

  printf("%d\n", dist2(a, b));
  return 0;
}
