#include <stdio.h>
#include <stdlib.h>

void test1() {
    int local1 = 10;
    printf("local1 : %d\n", local1);
}

void test2(int local2) {
    printf("local2 : %d\n", local2);
}

int main(int argc, char *argv[]) {
    test1();
    // printf("local1 : %d\n", local1);
    test2(100);
    // printf("local2 : %d\n", local2);
    
    int a = 0;
    
    while(a < 10) {
        a++;
        int b = 20;
        printf("a, b : %d, %d\n", a, b);
    }
    
    // printf("b : %d\n", b);
    
    return 0;
}
