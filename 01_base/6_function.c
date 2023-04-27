/*
함수
1. 함수는 특정한 기능에 대한 소스코드가 반복되는 것을 줄이도록 해줍니다.
2. 함수의 형태는 다음과 같습니다.
반환자료형 함수명 (매개변수) {
    수행될 명령어
    return 반환할 값;
}
3. 함수에서 매개변수오 반환할 값은 경우에 따라서 없을 수 있습니다.
4. 매개변수 및 반환할 값이 없을 때의 자료형은 void 입니다.
5. 함수화하는 것을 습관화 해야 한다.
*/

#include <stdio.h>
#include <stdlib.h>

void dice(int input) {
    printf("동빈이가 던진 주사위: %d\n", input);
}

int add(int a, int b){
    return a + b;
}

void calculator(int a, int b) {
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);
}

int main(void) {
    
    //printf("%d\n", add(10, 5));
    calculator(10, 5);
    
    system("read");
    //dice(3);

    return 0;
}