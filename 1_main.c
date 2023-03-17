#include <stdio.h> //표준 입출력
#include <stdlib.h>
int main(void) {
    printf("Hello World!\n");
    //system("read"); // stdio 와 stdlib 라이브러리 차이?
    int b;
    int a = 7;
    printf("The Number is %d \n", a);
    system("read");
    return 0;
}

// #include 로 라이브러리를 import하여 사용할 수 있다.
// <stdio.h> => 표준 입출력 ex) printf("");

/*
c언어는 main 함수부터 실행이 된다. 메인 함수는 항상 0을 반환하는 것이 일반적이다. 

system 함수는 운영체제의 기본적인 기능을 제어할 수 있다.
pause는 키보드를 입력하기 전까지 대기하는 기능이다.

변수
변수 선언
자료형 변수명
*/
