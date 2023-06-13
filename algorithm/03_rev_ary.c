#include <stdio.h>
#include <stdlib.h>
/* 
배열 요소를 역순으로 정렬하는 법
배열을 반으로 나누었을때 각 요소의 반대되는 위치에 있는 값들을 교환한다.
배열의 크기가 8일때
1 8
2 7
3 6
4 5
 */

// swap과 같은 함수는 함수형식 매크로로 지정해서 사용한다. 
#define swap(type, x, y) do{ type t = x; x = y; y = t;} while(0);

void ary_reverse(int a[], int n) {
    int i;
    for(i = 0; i < n /2; i++)
        swap(int, a[i], a[n - i - 1]);
}

int main(void) {
    int i, *x, nx;

    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("%d개의 정수를 입력하세요.\n", nx);
    for(i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("배열의 요소를 역순으로 정렬했습니다.\n");
    for(i = 0; i < nx; i++)
        printf("n[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}