#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a = 10;
    
    switch(a) {
        case 0 :
            printf("a는 0입니다\n");
            break;
        case 5 :
            printf("a는 5입니다\n");
            break;
        case 10 :
            printf("a는 10입니다\n");
            break;
        case 20 :
            printf("a는 20입니다\n");
            break;
        default :
            printf("a는 0,5,10,20이 아닙니다\n");
            break;
    }
    
    return 0;
}
