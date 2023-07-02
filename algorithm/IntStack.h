#ifndef __IntStack
#define __IntStack

typedef struct {
  int max;
  int ptr;
  int *stk;
} IntStack;

int initialize(IntStack *s, int max);

int push(IntStack *s, int x);

int pop(IntStack *s, int *x);

int peek(const IntStack *s, int *x);

void clear(IntStack *s);

int capacity(const IntStack *s);

int size(const IntStack *s);

int isEmpty(const IntStack *s);

int isFull(const IntStack *s);

int search(const IntStack *s, int x);

void print(const IntStack *s);

void terminate(IntStack *s);

#endif