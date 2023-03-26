#include <stdio.h>
#include <stdlib.h>

/*
문자 입출력 함수
- getchar()
- 단 하나의 문자를 입력 받는다.

1. 문자열을 처리할 때 버퍼의 개념이 많이 사용된다.
2. 버퍼란 임시적으로 특정한 데이터를 저장하기 위한 목적으로 사용됩니다.
3. C 프로그램은 기본적으로 사용자가 의도하지 않아도 자동으로 버퍼를 이용해 입출력을 처리한다.
*/

int main(void) {
    int a; char c;
    scanf("%d", &a);
    printf("%d\n", a);
    int temp;
    while((temp = getchar()) != EOF && temp != '\n') {}
    scanf("%c", &c);
    printf("%c\n", c);

    system("read");
    return 0;
}
/*
int main(void) {
    char a = getchar(); // 아스키코드 'A'
    printf("%c\n", a);
    system("read");
    return 0;
}
*/