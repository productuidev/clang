#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char a1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("a1 : %s\n", a1);
    
    char *a2 = "Hello";
    printf("a2 : %s\n", a2);
    
    char a3[11] = {'안', '녕', '하', '세', '요', '\0'};
    printf("a3 : %s\n", a3);
    
    char *a4 = "안녕하세요";
    printf("a4 : %s\n", a4);
    
    return 0;
}
