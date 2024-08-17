#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a = 10 > 2; // 1
    int b = 10 > 20; // 0
    int c = 10 > 3; // 1
    int d = 10 > 30; // 0
    int e;
    
    e = a && b;
    printf("a && b : %d\n", e);
    
    e = a && c;
    printf("a && c : %d\n", e);
    
    e = b || c;
    printf("b || c : %d\n", e);
    
    e = b || d;
    printf("b || d : %d\n", e);
    
    e = !a;
    printf("!a : %d\n", e);
    
    e = !b;
    printf("!b : %d\n", e);
    
    int f = 10;
    
    e = f >= 5 && f <= 20;
    printf("e : %d\n", e);
    
    return 0;
}
