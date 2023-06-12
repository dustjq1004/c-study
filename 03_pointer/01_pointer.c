#include <stdio.h>

void (*foo)();

int main(void) {

    int *a;
    int b = 0;
    // a = b; 캐스팅 오류

    int num = 5;
    int *pi = &num;
    
    printf("%d\n", *pi); // 간접지정 연산자 포인터 역참조

    *pi = 200;           // 좌변값에 참조 연산자 결과를 사용
    printf("%d\n", *pi); // 간접지정 연산자 포인터 역참조

    

    return 0;
}
