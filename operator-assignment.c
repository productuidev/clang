#include <stdio.h>
#include <stdlib.h>

int main() { 
    // Simple assignment 대입 연산자
    int a = 21, c;
    
    c = a;
    printf("c : %d\n", c); // 21
    
    c += a; // c = c + a; --> 21 + 21 = 42
    printf("c += a : %d\n", c);
    
    c -=a; // c = c - a; --> 42 - 21 = 21
    printf("c -= a : %d\n", c);
    
    c /= a; // c = c / a; --> 21 / 21 = 1
    printf("c /= a : %d\n", c);
    
    c = 200;
    
    c %= a; // c = c % a; --> 200 % 21 = 11 
    printf("c %= a : %d\n", c);
    
    c <<= 2; // c = c << 2; --> 11 * 4 = 44
    printf("c << 2 : %d\n", c);
    
    c >>= 2; // c = c >> 2; --> 44 / 4 = 11
    printf("c >> 2 : %d\n", c);
    
    return 0;
}
