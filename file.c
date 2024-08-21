#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    
    // fp = fopen("data1.txt", "w+");
    // fprintf(fp, "%s", "abcd");
    // fclose(fp);
    
    // fp = fopen("data1.txt", "w+");
    // fprintf(fp, "%s", "cedf");
    // fclose(fp);
    
    fp = fopen("data1.txt", "a+");
    fprintf(fp, "%s", "kkkk");
    fclose(fp);
        
    return 0;
}
