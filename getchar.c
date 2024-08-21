#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("문자입력 : ");
    
    char a1 = getchar();
    printf("a1 : %c\n", a1);
    
    putchar(a1);
    
    return 0;
}
