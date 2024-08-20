#include <stdio.h>
#include <stdlib.h>

struct Student2 {
    int kor;
    int mat;
    int eng;
    char *name;
    int age;
};

int main(int argc, char *argv[]) {
    
    struct Student2 s1;
    struct Student2 s2;
    
    s1.kor = 90;
    s1.mat = 80;
    s1.eng = 70;
    s1.name = "최길동";
    s1.age = 40;
    
    s2.kor = 70;
    s2.mat = 80;
    s2.eng = 90;
    s2.name = "박길동";
    s2.age = 50;
    
    printf("s1.kor : %d\n", s1.kor);
    printf("s1.mat : %d\n", s1.mat);
    printf("s1.eng : %d\n", s1.eng);
    printf("s1.name : %s\n", s1.name);
    printf("s1.age : %d\n", s1.age);
    
    printf("--------------------\n");
    
    printf("s2.kor : %d\n", s2.kor);
    printf("s2.mat : %d\n", s2.mat);
    printf("s2.eng : %d\n", s2.eng);
    printf("s2.name : %s\n", s2.name);
    printf("s2.age : %d\n", s2.age);
    
    return 0;
}
