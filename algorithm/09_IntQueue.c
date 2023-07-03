#include <stdio.h>
#include <stdlib.h>
#include "09_IntQueue.h"

int initialize(IntQueue *q, int max) {
  q->num = q->front = q->rear = 0;
  if((q->que = calloc(max, sizeof(int))) == NULL) {
    q->max = 0;
    return -1;
  }
  q->max = max;
  return 0;
}

int enque(IntQueue *q, int x) {
  if(q->num >= q->max) return -1;
  else {
    q->num++;
    q->que[q->rear++] = x;
    if(q->rear == q->max) q->rear = 0;
    return 0;
  }
  return 0;
}

int deque(IntQueue *q, int *x) {
  if(q->num <= 0) return -1;
  else {
    q->num--;
    *x = q->que[q->front++];
    if(q->front == q->max) q->front = 0;
    return 0;
  }
}

int peek(const IntQueue *q, int *x) {
    if(q->num <= 0) return -1;
    *x = q->que[q->front];
    return 0;
}

void clear(IntQueue *q) {
  q->num = q->front = q->rear = 0;
}

int capacity(const IntQueue *q) {
  return q->max;
}

int size(const IntQueue *q) {
  return q->num;
} 

int isEmpty(const IntQueue *q) {
  return q->num <= 0;
}

int isFull(const IntQueue *q) {
  return q->num >= q->max;
}

int search(const IntQueue *q, int x) {
  int i, idx;
  for(i = 0; i < q->num; i ++) {
    if(q->que[idx = (i + q->front) % q->max] == x) {
      return idx;
    }
  }

  return -1;
}

void print(const IntQueue *q) {
  int i;
  for(i = 0; i < q->num; i++) {
    printf("%d ", q->que[i + q->front] % q->max);
  }
  putchar('\n');
}

void terminate(IntQueue *q) {
  if(q->que != NULL) {  
    free(q->que);
    q->max = q->num = q->rear = 0;
  }
}

