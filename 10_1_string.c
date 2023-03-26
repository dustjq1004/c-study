/*
문자열 처리를 위한 함수
- string.h 라이브러리
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char a[30] = "My Name is ";
    char b[20] = "Name";
    //strcat(a, b);
    printf("%d\n", strlen(a));
    printf("%d\n", strcmp(b, a));
    printf("%s\n", a);
    printf("%s\n", strstr(a, b));
    system("read");
    return 0;
}