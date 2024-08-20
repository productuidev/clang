#include <stdio.h>
#include <stdlib.h>

struct Test1 {
    int a1;
    int a2;
};

typedef struct Test2 {
    int a1;
    int a2;
} Test2;

int main(int argc, char *argv[]) {
    
    struct Test1 t1;
    t1.a1 = 100;
    t1.a2 = 200;
    printf("t1.a1 : %d\n", t1.a1);
    printf("t1.a2 : %d\n", t1.a2);
    
    Test2 t2;
    t2.a1 = 300;
    t2.a2 = 400;
    printf("t2.a1 : %d\n", t2.a1);
    printf("t2.a2 : %d\n", t2.a2);
    
    return 0;
}
