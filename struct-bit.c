#include <stdio.h>
#include <stdlib.h>

struct Test1 {
    unsigned int a1;
    unsigned int a2;
};

struct Test2 {
    unsigned int a1:1;
    unsigned int a2:1;
};

int main(int argc, char *argv[]) {
    
    struct Test1 t1;
    struct Test2 t2;
    
    printf("t1 : %d\n", sizeof(t1));
    printf("t2 : %d\n", sizeof(t2));
    
    t1.a1 = 1;
    t2.a1 = 1;

    printf("t1.a1 : %d\n", t1.a1);
    printf("t2.a1 : %d\n", t2.a1);
    
    t1.a2 = 2; // 1 0
    t2.a2 = 2; //   0
    
    printf("t1.a2 : %d\n", t1.a2);
    printf("t2.a2 : %d\n", t2.a2);
    
    return 0;
}
