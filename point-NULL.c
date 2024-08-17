#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *pt = NULL;
    printf("pt : %d\n", pt);
     
    if(pt) {
        printf("포인터 변수 pt에는 주소값이 설정되어 있습니다\n");
    }
    
    return 0;
}
