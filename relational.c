#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a = 21, b = 10, c;
    
    c = a == b;
    printf("a == b : %d\n", c);
    
    c = a != b;
    printf("a != b : %d\n", c);
    
    c = a < b;
    printf("a < b : %d\n", c);
    
    c = a > b;
    printf("a > b : %d\n", c);
    
    c = a <= b;
    printf("a <= b : %d\n", c);
    
    c = a >= b;
    printf("a >= b : %d\n", c);
    
    return 0;
}
