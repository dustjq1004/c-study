#include <stdio.h>
#include <stdlib.h>

//2차원 배열과 2중 for문
int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }};

int main(void) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n");  
    }
    system("read");
    return 0;
}