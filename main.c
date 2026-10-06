#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    long long result = 0;
    long imat = 1;
     while (!(imat>n)) {
        result = result +imat;
        imat = imat+2;

     }

    printf("%lld", result);
    return 0;
}
