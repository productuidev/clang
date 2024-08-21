#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    
    fp = fopen("data2.txt", "w+");
    fprintf(fp, "%s", "abcd kkkk");
    fclose(fp);
    
    fp = fopen("data2.txt", "r");
    char a1[255];
    //fscanf(fp, "%s", a1);
    fscanf(fp, "%[^\n]", a1); // enter
    
    printf("%s\n", a1);
    fclose(fp);
        
    return 0;
}
