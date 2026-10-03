#include <stdio.h>

int main(void) {
    int nums[5];
    for (int i = 0; i < 5; i++) scanf("%d", &nums[i]);

    int best = nums[0];
    for (int i = 0; i<5; i++) {
        if (nums[i] > best) {
            best= nums[i];
        }
    }

    printf("%d\n", best);
    return 0;
}
