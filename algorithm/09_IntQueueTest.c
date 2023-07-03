#include <stdio.h>
#include "09_IntQueue.h"

int main(void) {
  IntQueue que;

  if(initialize(&que, 64) == -1) {
    puts("큐 생성에 실패했습니다.");
    return -1;
  }

  while(1) {
    int m, x;

    printf("현재 데이터의 수 : %d / %d \n", size(&que), capacity(&que));
    printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (0)종료 : ");
    scanf("%d", &m);

    if(m == 0) break;

    switch(m) {
      case 1: /*푸시*/
      printf("데이터 : ");
      scanf("%d", &x);
      if(enque(&que, x) == -1)
        puts("\a오류 : 인큐에 실패했습니다.");
      break;
      case 2:
        if(deque(&que, &x) == -1)
          puts("\a오류 : 디큐에 실패하였습니다.");
        else 
          printf("디큐 데이터는 %d입니다.\n", x);
        break;
      case 3:
        if(peek(&que, &x) == -1)
          puts("\a오류 : 피크에 실패했습니다");
        else
          printf("피크 데이터는 %d입니다.\n", x);
        break;
      case 4:
        print(&que);
        break;
    }
  }

  terminate(&que);
  return 0;
}