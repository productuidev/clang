#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a = sizeof(int);
    printf("int : %d\n", a); // 4
    
    int b = 100;
    int c = sizeof(b);
    printf("b : %d\n", c); // 4
    
    a = 10;
    b = (a == 1) ? 20 : 30;
    printf("b : %d\n", b); // 30
    
    b = (a == 10) ? 20 : 30;
    printf("b : %d\n", b); // 20
    
    return 0;
}
