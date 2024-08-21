#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("문자열 입력 : ");
    
    char a2[100];
    gets(a2);
    
    printf("a2 : %s\n", a2);
    
    puts(a2);
    
    return 0;
}
