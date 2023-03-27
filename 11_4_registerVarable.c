#include <stdio.h>
#include <stdlib.h>

int main(void) {
    register int a = 10, i;
    for(i = 0; i < a; i++) {
        printf("%d \n", i);
    }
    system("read");
    return 0;
}