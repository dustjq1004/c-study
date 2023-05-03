#define _CRT_SECURE_NO_WARGINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define LENGTH 1000

char **array;
int founded;

int main(void) {
    int n;
    char *word;
    word = malloc(sizeof(char) * 100);
    scnaf("%d %s", &n, word);
    array = (char**)malloc(sizeof(char*) * n);
    for( int i = 0; i < n; i++) {
        array[i] = malloc(sizeof(char) * LENGTH);
        scanf("%s", array[i]);
    }
    for(int i = 0; i < n; i++) {
        if (!strcmp(array[i], word)) {
            printf("%d번째 원소입니다.\n", i+1);
            founded = 1;
        }
    }
    if (!founded) printf("원소를 찾을 수 없습니다.\n");
    system("read");

    return 0;
}
