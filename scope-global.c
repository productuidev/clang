#include <stdio.h>
#include <stdlib.h>

int global1 = 100;
int a100 = 200;

void test3() {
    printf("global1 : %d\n", global1);
}

int main(int argc, char *argv[]) {
    printf("global1 : %d\n", global1);
    
    test3();
    
    int a100 = 500;
    printf("a100 : %d\n", a100);
    
    return 0;
}
