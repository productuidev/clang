#include <stdio.h>
#include <stdlib.h>

int test1() {
    return 100;
}

int test2(int *v1) {
    *v1 = 100;
}

int test3(int *v1, int *v2) {
    *v1 = 1000;
    *v2 = 2000;
}

int main(int argc, char *argv[]) {
    int a1 = test1();
    printf("a1 = %d\n", a1); // 100
    
    int a2;
    test2(&a2);
    printf("a2 : %d\n", a2); // 100
    
    int a3;
    int a4;
    test3(&a3, &a4);
    printf("a3 : %d\n", a3); // 1000
    printf("a4 : %d\n", a4); // 2000
    
    return 0;
}
