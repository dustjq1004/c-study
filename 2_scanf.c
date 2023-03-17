#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    double b;
    //scanf("%d", &a);
    scanf("%lf", &b);
    //printf("입력한 숫자는 %d입니다. \n" , a);
    printf("%.2f\n", b);


    system("read");
    return 0;
}

