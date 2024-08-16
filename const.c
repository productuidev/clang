#include <stdio.h>
#include <stdlib.h>

int main() { 
    const int a1 = 1000;
    print("a1:%d\n", a1);
    
    a1 = 2000;
    print("a1:%d\n", a1);
    
    return 0;
}

// /tmp/achkZGqNKw.c: In function 'main':
// ERROR!
// /tmp/achkZGqNKw.c:6:5: warning: implicit declaration of function 'print'; did you mean 'printf'? [-Wimplicit-function-declaration]
//     6 |     print("a1:%d\n", a1);
//       |     ^~~~~
//       |     printf
// /tmp/achkZGqNKw.c:8:8: error: assignment of read-only variable 'a1'
//     8 |     a1 = 2000;
//       |        ^


// === Code Exited With Errors ===
