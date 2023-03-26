#include <stdio.h>
#include <stdlib.h>

/*
문자열
1. 문자들의 배열
2. 문자열은 컴퓨더 메모리 구조상에서 마지막에 널 값을 포함한다.
    - 널 값은 문자열의 끝을 알리는 목적으로 사용된다.
    - printf() 함수를 실행하면 컴퓨터는 내부적으로 널을 만날 때까지 출력한다.

문자열과 포인터
1. 문자열 형태로 포인터를 사용하면 포인터에 특정한 문자열의 주소를 넣게 된다.
2. 문자열을 넣게 되면 문자열은 읽기 전용으로 메모리 공간에 넣은 뒤에 그 위치를 처리한다.

문자열 입출력 함수
1. scanf() 함수는 공백을 만날 때까지 입력 받지만 gets() 함수는 공백까지 포함하여 한줄을 입력 받는다.


*/
int main(void) {
    char a[100];
    fgets(a, sizeof(a), stdin);
    //gets_s(a, sizeof(a));
    // _s() 함수들은 선택사항이라 gets_s()를 지원하지 않는 컴파일러도 많다.
    printf("%s\n", a);
    system("read");
    return 0;
}
/*
int main(void) {
    char *a = "Hello World";
    printf("%s\n", a);
    system("read");
    return 0;
}
*/