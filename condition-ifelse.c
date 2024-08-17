#include <stdio.h>
#include <stdlib.h>

int main() { 
    int a = 10, b = 20;
    
    // if(a > b) {
    //     printf("a는 b보다 큽니다\n");
    // }
    // else {
    //     printf("a는 b보다 크지 않습니다\n");
    // }
    
    // if(a < b) {
    //     printf("a는 b보다 작습니다\n");
    // }
    
    if (a < 0) {
        printf("a는 0보다 작습니다\n");
    } else if (a < 5) {
        printf("a는 5보다 작습니다\n");
    } else if (a < 10) {
        printf("a는 10보다 작습니다\n");
    } else if (a < 20) {
        printf("a는 20보다 작습니다\n");
    } else {
        printf("a는 0,5,10,20보다 작지 않습니다.\n");
    }
    
    return 0;
}
