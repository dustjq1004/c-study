#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
배열
1. 동일한 자료형을 여러개 담는 기술
2. 배열을 사용하면 동일한 성격이 데이터를 다수 표현
3. 선언
자료형 배열명[배열의 크기] = {초기화 값};
- 초기화 값은 없을 수도 있다.
- 값을 넣지 않으면 사이즈 만큼 0으로 초기화

limits.h
- 다양한 자료형들의 최댓값 최솟값, 자료형의 표현할 수 있는 한계 값을 가져올 수 있다.

INT_MIN
- limits 헤더 파일에 정의되어 있는 상수
- 최댓값을 구할 때 자주 사용된다.
- int형 범위의 최솟값을 반환한다.

문자열과 배열
1. c언어는 문자열 자료형을 제공하지 않는다.
2. 문자를 여러 개 묶어 놓은 형태로 문자열을 표현
*/

int main(void) {
    /*
    int a[10] = {6,5,4,3,2,1};
    int i, maxValue = INT_MIN;
    for(i=0; i < 10; i++){
        printf("%d \n", a[i]);
        if(maxValue < a[i]) maxValue = a[i];
    }
    printf("%d\n", maxValue);
    */
    char a[20];
    scanf("%s", &a);
    printf("%s\n", a);

    // 특정한 문자열에 접근하는 방법
    char b[20] = "Hello World";
    b[4] = ', ';
    printf("%s\n", b); 

    system("read");
    return 0;
}