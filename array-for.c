#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int array1[3];
    
    array1[0] = 10;
    array1[1] = 20;
    array1[2] = 30;
    array1[3] = 40;
    
    printf("array1[0] : %d\n", array1[0]);
    printf("array1[1] : %d\n", array1[1]);
    printf("array1[2] : %d\n", array1[2]);
    printf("array1[3] : %d\n", array1[3]);
    
    int i;
    
    for(i = 0; i < 3; i++) {
        printf("array1[%d] : %d\n", i, array1[i]);
    }
    
    return 0;
}