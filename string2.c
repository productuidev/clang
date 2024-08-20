#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;
    
    strcpy(str3, str1);
    printf("strcpy : %s\n", str3);
    
    strcat(str1, str2);
    printf("strcat : %s\n", str1);
    
    len = strlen(str1);
    printf("strlen : %d\n", len);
    
    len = strlen("안녕하세요");
    printf("strlen : %d\n", len);
    
    return 0;
}
