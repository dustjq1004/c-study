#include <stdio.h>
#include <stdlib.h>


/**
반복문
for, while

특정한 조건에 부합하면 해당 블록 내에 로직을 반복해서 실행
반복문 강제 탈출은 break; 사용
행렬과, 그래프등에 이중 반목문이 많이 사용된다.

for(초기화; 조건; 증가값) {

}


for문과 while 문은 같다. => 치환이 가능하다.
c언어 소스코드가 최적화 되면서 어셈블리어 명령문 동일하게 동작한다.
*/
/*
int main(void) {
    int n, sum; 
    printf("숫자를 입력하세요...\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("1 ~ %d 까지 합계 : %d\n", n, sum);
    system("read");
    return 0;
}
*/

int main(void) {
    int n, c; 
    //printf("숫자를 입력하세요...\n");
    scanf("%d %c", &n, &c);
    while (n--) {
        printf("%c\n", c);
    }
    system("read");
    return 0;
}

