#include <stdio.h>

/* Return value limited to the range lo..hi (lo <= hi is guaranteed). */
int clamp(int value, int lo, int hi) {
  /* TODO: return lo, hi, or value itself, whichever applies. */
  int result = value;
  if (result > hi) {
    result = hi;
  } else if (result < lo) {
    result = lo;
  }
  return result;
}

int main(void) {
  int lo, hi, n;
  scanf("%d %d", &lo, &hi);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    printf("%d\n", clamp(x, lo, hi));
  }
  return 0;
}
