#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
} Student;

int main(void) {
    //struct Student s;
    //Student s = {"02222", "aaa", 4, "유아교육과"};
    Student *s = malloc(sizeof(Student));



    strcpy(s->studentId, "20143157");
    strcpy(s->name, "ㅁㅁㅁ");
    s->grade = 4;
    strcpy(s->major, "컴퓨터공학과");

    // printf("학번: %s\n", s.studentId);
    // printf("이름: %s\n", s.name);
    // printf("성적: %d\n", s.grade);
    // printf("전공: %s\n", s.major);
    printf("학번: %s\n", s->studentId);
    printf("이름: %s\n", s->name);
    printf("성적: %d\n", s->grade);
    printf("전공: %s\n", s->major);

    system("read");
    return 0;
}