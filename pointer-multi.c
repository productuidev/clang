#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a10 = 100;
    int *a20 = &a10;
    int **a30 = &a20;
    
    printf("a10 : %d\n", a10);
    printf("*a20 : %d\n", *a20);
    printf("**a30 : %d\n", **a30);
    
    return 0;
}
