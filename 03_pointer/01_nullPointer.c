#include <stdio.h>

void (*foo)();

int main(void) {

    int num;
    int *pi = &num;
    
    printf("Value of pi : %p\n", pi);
    void *pv = pi;
    pi = (int*) pv;
    printf("Value of pi: %p\n", pi);

    size_t sizet = -5;
    printf("%d\n", sizet);
    printf("%zu\n", sizet);

    return 0;
}
