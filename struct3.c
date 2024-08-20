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
    
    struct Student2 stu_array[3];
    
    stu_array[0].kor = 10;
    stu_array[1].kor = 20;
    stu_array[2].kor = 30;
    
    int i;
    
    for(i = 0; i < 3; i++) {
        printf("kor : %d\n", stu_array[i].kor);
    }
    
    return 0;
}
