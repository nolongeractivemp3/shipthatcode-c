#include <stdio.h>

int main(void) {
    int w, h;
     scanf("%d", &w);
     scanf("%d", &h);
     long long area = (long long)w * h;
     double ratio = (double)w/h;
     printf("%lld\n%.2f", area, ratio);
     // TODO: compute the area and the width-to-height ratio,
     // then print them on two lines as the exercise describes.
     return 0;

}
