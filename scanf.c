#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char a1[100];
    int a2;
    
    // printf("문자열 입력 :");
    // scanf("%s", a1);
    // printf("숫자 입력 :");
    // scanf("%d", &a2);
    printf("값 입력 :");
    scanf("%s %d", a1, &a2);
    
    printf("a1 : %s, a2 : %d\n", a1, a2);
        
    return 0;
}
