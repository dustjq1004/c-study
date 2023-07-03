#ifndef __IntQueue
#define __IntQueue

typedef struct {
  int max;
  int num;
  int front;
  int rear;
  int *que;
} IntQueue;

int initialize(IntQueue *q, int max);

int enque(IntQueue *q, int x);

int deque(IntQueue *q, int *x);

int peek(const IntQueue *q, int *x);

void clear(IntQueue *q);

int capacity(const IntQueue *q);

int size(const IntQueue *q);

int isEmpty(const IntQueue *q);

int isFull(const IntQueue *q);

int search(const IntQueue *q, int x);

void print(const IntQueue *q);

void terminate(IntQueue *q);

#endif