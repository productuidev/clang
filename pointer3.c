#include <stdio.h>
#include <stdlib.h>

void test1(int a, int b) {
    printf("a : %d\n", a); // a : 10
    printf("b : %d\n", b); // b : 20
}

void add(int a, int b) {
    printf("add : %d\n", a + b); // 100 + 200 = 300
}

void minus(int a, int b) {
    printf("minus : %d\n", a - b); // 200 - 100 = 100
}

void process(void (*fn)(int, int), int a, int b) {
    fn(a, b);
}
int main(int argc, char *argv[]) {
    void(*pt)(int, int);
    pt = test1;
    pt(10, 20);
    
    process(add, 100, 200);
    process(minus, 200, 100);
    
    return 0;
}
