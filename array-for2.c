#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int array1[10] = {0,1,2,3,4,5,6,7,8,9};
    int array2[] = {0,1,2,3,4,5,6,7,8,9};
    
    int i;
    for(i = 0; i < 10; i++) {
        printf("array1[%d] : %d\n", i, array1[i]);
    }
    printf("--------------------------\n");
    for(i = 0; i < 10; i++) {
        printf("array2[%d] : %d\n", i, array2[i]);
    }
    
    return 0;
}
