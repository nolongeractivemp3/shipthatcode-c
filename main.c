#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1)
    return 0;

  /* TODO: replace NULL with a malloc call that reserves room for n ints. */
  int *nums = malloc(n * sizeof n);
  if (nums == NULL) {
    fprintf(stderr, "no memory \n");
    /* TODO: allocation failed: print a message to stderr and return 1. */
    return 1;
  }

  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  long int sum = 0;
  for (int i = 0; i < n; i++)
    sum = sum + nums[i];

  for (int i = n; n > 0; n--) {
    printf("%d ", nums[n - 1]);
  }
  printf("\n%ld", sum);
  free(nums);
  return 0;
}
