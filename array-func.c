#include <stdio.h>
#include <stdlib.h>

void test(int v1[]) {
    int i;
    for(i = 0; i < 10; i++) {
        printf("v1[%d] : %d\n", i, v1[i]);
        // printf("v1[%d] : %d\n", v1[i], i);
    }
}

int main(int argc, char *argv[]) {
    int array1[] = {10,20,30,40,50,60,70,80,90,100};
    int array2[] = {100,200,300,400,500,600,700,800,900,1000};
    
    test(array1);
    printf("------------------------\n");
    test(array2);
    
    return 0;
}
