
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int resultof3 = n%3;
    int resultof5 = n%5;
    if (!resultof5 && !resultof3) {
        printf("FizzBuzz");
    } else if (!resultof3) {
        printf("Fizz");
    } else if (!resultof5) {
        printf("Buzz");
    } else {
        printf("%d", n);
    }
    /* TODO: print exactly one line:
         multiple of 3 and 5  -> FizzBuzz
         multiple of 3 only   -> Fizz
         multiple of 5 only   -> Buzz
         anything else        -> the number itself */

    return 0;
}
