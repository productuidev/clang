#include <stdio.h>
#include <stdlib.h>

struct Student1 {
    int kor;
    int mat;
    int eng;
    char *name;
    int age;
} stu;

int main(int argc, char *argv[]) {
    stu.kor = 100;
    stu.mat = 80;
    stu.eng = 70;
    stu.name = "홍길동";
    stu.age = 30;
    
    printf("stu.kor : %d\n", stu.kor);
    printf("stu.mat : %d\n", stu.mat);
    printf("stu.eng : %d\n", stu.eng);
    printf("stu.name : %s\n", stu.name);
    printf("stu.age : %d\n", stu.age);
    
    return 0;
}
