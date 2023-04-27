#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //표준 입출력
#include <stdlib.h>
#define SIZE 10000
#define INF 9999999

int stack[SIZE];
int top = -1;

void push(int data) {
    if(top == SIZE - 1) {
        printf("스택 오버플로우가 발생했습니다.\n");
        return;
    }
    stack[++top] = data;
}

int pop() {
    if(top == -1) {
        printf("스택 언더플로우가 발생했습니다.\n");
        return -INF;
    }
    return stack[top--];
}

void show() {
    printf("--- 스택의 최상단 ---\n");
    for(int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("--- 스택의 최하단 ---\n");
}

int main(void) {
    push(3);
    push(4);
    push(2);
    push(1);
    push(3);
    pop();
    push(6);
    pop();
    show();
    system("read");
    return 0;
}