#include <stdio.h>
#include <stdlib.h>

void test1(int *v1) {
    int i;
    
    for(i = 0; i < 10; i++) {
        printf("*(v1 + %d) : %d\n", i, *(v1 + i));
    }
}

int * test2() {
    static int array2[3] = {1,2,3};
    return array2;
}

int main(int argc, char *argv[]) {
    
    int array1[] = {10,20,30,40,50,60,70,80,90,100};
    
    printf("array1[0] : %d\n", array1[0]);
    printf("array1[1] : %d\n", array1[1]);
    printf("array1[2] : %d\n", array1[2]);
    
    printf("----------------\n");
    
    printf("*array1 : %d\n", *array1);
    printf("*(array1 + 1) : %d\n", *(array1 + 1));
    printf("*(array1 + 2) : %d\n", *(array1 + 2));
    
    printf("----------------\n");
    
    int i;
    for(i = 0; i < 10; i++) {
        printf("array1[%d] : %d\n", i, array1[i]);
    }
    
    printf("----------------\n");
    
    for(i = 0; i < 10; i++) {
        printf("*(array1 + %d) : %d\n", i, *(array1 + i));
    }
    
    printf("----------------\n");
    
    test1(array1);
    
    printf("----------------\n");
    
    int *array3 = test2();
    
    for(i = 0; i < 3; i++) {
        printf("*(array3 + %d) : %d\n", i, *(array3 + i));
    }
    
    return 0;
}
