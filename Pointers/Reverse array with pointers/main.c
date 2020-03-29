#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 4;
    int a[] = {1,2,3,5};
    int b[n];
    int *p = a;
    int *q = b + n - 1;
    for(; p != a + n; p++,q--) {
        *q = *p;
    }

    q = b;
    for(; q != b + n; q++) {
        printf("%d ",*q);
    }
    return 0;
}
