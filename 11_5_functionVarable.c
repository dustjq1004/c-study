#include <stdio.h>
#include <stdlib.h>

void add(int *a, int b) {
    *a = (*a) + b;
}
int main(void) {
    int a = 7;
    //add(a, 10);
    add(&a, 10);
    printf("%d\n", a);
    system("read");
    return 0;
}