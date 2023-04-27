#include <stdio.h>
#include <stdlib.h>

void myFunction() {
    printf("It's my funciton. \n");
}

void yourFrunction() {
    printf("It's your funciton. \n");
}

int add (int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int(*process(char* a))(int, int) {
    printf("%s\n", a);
    return add;
}

int main(void) {
    void(*fp)() = myFunction;
    fp();
    fp = yourFrunction;
    fp();

    int(*fp2)(int, int) = add;
    printf("%d \n", fp2(10, 3));
    fp2 = sub;
    printf("%d \n", fp2(10, 3));

    int(*fp3)(int, int) = add;
    printf("%d\n", process("10 과 20을 더하겟습니다.")(10, 20));
    system("read");
    return 0;
}


