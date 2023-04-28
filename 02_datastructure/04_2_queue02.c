#include <stdio.h> //표준 입출력
#include <stdlib.h>
#define INF 99999999

typedef struct {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
    int count;
} Queqe;

void push(Queqe *queue, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if(queue->count == 0) {
        queue->front = node;
    }
    else {
        queue->rear->next = node;
    }
    queue->rear = node;
    queue->count++; 
}

int pop(Queqe *queqe) {
    if (queqe->count == 0) {
        printf("큐 언더플로우가 발생했습니다.\n");
        return -INF;
    }
    Node *node = queqe->front;
    int data = node->data;
    queqe->front = node->next;
    free(node);
    queqe->count--;
    return data;
}

void show(Queqe *queqe) {
    Node * cur = queqe->front;
    printf("---큐의 앞---\n");
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    printf("---큐의 뒤---\n");
}

int main(void) {
    Queqe queqe;
    queqe.front = queqe.rear = NULL;
    queqe.count = 0;
    push(&queqe, 7);
    push(&queqe, 5);
    push(&queqe, 4);
    pop(&queqe);
    push(&queqe, 6);
    pop(&queqe);
    show(&queqe);
    system("read");
    return 0;
} 