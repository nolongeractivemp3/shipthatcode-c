#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100] = "";
    fgets(buf, sizeof buf, stdin);

    for (int i=0; !(buf[i] == '\0'); i++) {
        if (buf[i] == '\n') {buf[i] = '\0';}
    }
    printf("%d\n", (int)strlen(buf));
    return 0;
}
