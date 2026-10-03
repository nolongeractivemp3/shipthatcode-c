#include <stdio.h>

int main(void) {
    double test = 0.0;
    double test2 = 0.0;
    scanf("%lf\n%lf", &test, &test2);
    double sum = test+test2;
    int intsum = (int)sum;
    printf("%f\n%d", sum,intsum);
    return 0;
}
