#include <stdio.h>
#include <stdlib.h>


/**
 사칙 연산
 +, -, * /, %

 관계 연산
  <, >, <=, >=, ==, !=
  결과 값 : true - 1, false - 0
 
 논리 연산
  !, &&, ||

 증감 연산
 ++a, a++, --a, a--

 삼항 연산
 a == b ? 100 : -100

 비트 연산
 ~, &, |, ^, <<
*/
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);
    printf("%d / %d = %d \n", a, b, a / b);
    printf("%d %% %d = %d \n", a, b, a % b);

    printf("%d > %d = %d \n", a, b, a > b);

    printf("%d \n", !a);
    printf("%d \n", a && b);
    printf("%d \n", (a >= b) && (a == b));

    printf("++a = %d \n", ++a);

    printf("a == b : %d \n", a == b ? 100 : -100);

    system("read");
    return 0;
}

