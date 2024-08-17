#include <stdio.h>
#include <stdlib.h>

void test1() {
    printf("test1 함수가 호출되었습니다\n");
}

void test2();

int test3() {
    return 100;
}

int test4(int v1, int v2) {
    int v3 = v1 + v2;
    
    return v3;
}

int main(int argc, char *argv[]) {
    test1();
    test2();
    
    int a1 = test3();
    printf("a1 : %d\n", a1);
    
    int a2 = test4(100, 200);
    printf("a2 : %d\n", a2);
    
    return 0;
}

void test2() {
    printf("test2 함수가 호출되었습니다\n");
}
