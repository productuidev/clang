#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a1 = 100;
    int *a2 = &a1;
    int a3 = a1;
    
    printf("a1 : %d\n", a1); // a1의 값
    printf("a2 : %d\n", a2); // a1의 주소값
    printf("*a2 : %d\n", *a2); // a1의 값
    
    a3 = 1000;
    printf("a1 : %d\n", a1);
    printf("a3 : %d\n", a3);
    
    *a2 = 2000;
    printf("a1 : %d\n", a1); // 2000
    printf("*a2 : %d\n", *a2); // 2000
    
    return 0;
}
