#include <stdio.h>
#include <stdlib.h>


int main() {
    int n = 4;
    int a[] = {1,2,3,5};
    int b[n];
    int *p = a;
    int *q = b;
    for(; p!= a + n; p++, q++) {
        *q = *p;
        printf("%d ",*q);
    }
    return 0;
}

