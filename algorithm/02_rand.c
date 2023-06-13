#include <time.h> // time()
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
    int i;
    int max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max) max = a[i];
    return max;
}


int main(void) {
    int i;
    int *height;
    int number;
    printf("사람 수 : ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int));
    srand(time(NULL)); // seed 초기화 - seed에 따라 난수가 달라짐. 같은 seed 일 경우 같은 숫자가 반복해서 생성
    for(i = 0; i < number; i++) {
        height[i] = 100 + rand() % 90; // 90으로 나눈 나머지 0~89에서 더하기 100으로 100~189 난수를 생성한다.
        printf("height[%d] = %d\n", i, height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);

    return 0;
}
