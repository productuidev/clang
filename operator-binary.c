#include <stdio.h>
#include <stdlib.h>

int main() { 
    // binary 2진수 값을 연산하는 연산자
    int a = 60; // 0011 1100
    int b = 13; // 0000 1101
    int c;
    
    c = a & b; // 0000 1100
    printf("a & b = %d\n", c); // 12
    
    c = a | b; // 0011 1101
    printf("a | b = %d\n", c); // 61
    
    c = a ^ b; // 0011 0001
    printf("a ^ b = %d\n", c); // 49
    
    c = ~a; // 1100 0011
    printf("~a : %d\n", c); // -61
    
    c = a << 2; // 1111 0000
    printf("a << 2 : %d\n", c); // 240
    
    c = a >> 2; // 0000 1111
    printf("a >> 2 : %d\n", c); // 15
    
    return 0;
}
