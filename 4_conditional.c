#include <stdio.h>
#include <stdlib.h>


/**
 조건문
 if, else, else if
 switch

 제어문 중 하나.
 프로그램의 진행 경로를 변경

*/
int main(void) {
    int a, b;
    /*
    scanf("%d %d", &a, &b);

    if(a == b) {  
        printf("%d 와 %d 는 같다 \n", a, b);    
    } else if (a >= b) {
        printf("%d 는 %d 보다 크거나 같다 \n", a, b);    
    } else {
        printf("faill,,,,, \n");    
    }   

    */
    
    printf("학점을 입력하세요...\n");
    char c;
    scanf("%c", &c);

    switch (c) {
        case 'A':
            printf("A 학점 입니다. \n");
            break;
        case 'B':
            printf("B 학점 입니다. \n");
            break;
        default:
            printf("낙제 입니다. \n");
            break;
    }







    
    system("read");
    return 0;
}

