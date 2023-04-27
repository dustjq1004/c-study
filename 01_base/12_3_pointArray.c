#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //int a = 10;
    //int b[10];
    //b = &a;           => 배열의 이름은 상수이기 때문에 다른 변수의 주솟값으로 대체할 수 없다.

    int a[5] = {1, 2, 3, 4, 5};
    int *b = a;
    printf("%d\n", b[2]);
    system("read");
    return 0;
}