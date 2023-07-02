#include <stdio.h>
#include "IntStack.h"

int main(void) {
  IntStack s;
  if(initialize(&s, 64) == -1) {
    puts("스택 생성에 실패하였습니다.");
    return 1;
  }

  while(1) {
    int menu, x;
    printf("현재 데이터 수 : %d /%d ]\n", size(&s), capacity(&s));
    printf("(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료 : ");
    scanf("%d", &menu);

    if(menu == 0) break;
    switch (menu) {
    case 1: /*푸시*/
      printf("데이터 : ");
      scanf("%d", &x);
      if(push(&s, x) == -1)
        puts("\a오류 : 푸시에 실패했습니다.");
      break;
    
    case 2:
      if(pop(&s, &x) == -1)
        puts("\a오류 : 팝에 실패하였습니다.");
      else 
        printf("팝 데이터는 %d입니다.", x);
      break;
    case 3:
      if(peek(&s, &x) == -1)
        puts("\a오류 : 피크에 실패했습니다");
      else
        printf("피크 데이터는 %d입니다.", x);
      break;
    case 4:
      print(&s);
      break;
    }
  }
  terminate(&s);

  return 0;
}
