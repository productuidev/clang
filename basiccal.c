#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a = 21, b = 10, c;
    
    c = a + b;
    printf("a+b=%d\n", c);
    
    c = a - b;
    printf("a-b=%d\n", c);
    
    c = a * b;
    printf("a*b=%d\n", c);
    
    c = a / b;
    printf("a/b=%d\n", c);
    
    c = a % b;
    printf("a%b=%d\n", c);
    
    int d = 10, e = 10, f = 10, g = 10;
    
    c = d;
    d = d + 1;
    printf("c, d : %d, %d\n", c, d);
    
    d = 10;
    c = d++;
    printf("c, d : %d, %d\n", c, d);
    
    c = ++e;
    printf("c, e : %d, %d\n", c, e);
    
    c = f--;
    printf("c, f : %d, %d\n", c, f);
    
    c = --g;
    printf("c, g : %d, %d\n", c, g);
    
    return 0;
}
