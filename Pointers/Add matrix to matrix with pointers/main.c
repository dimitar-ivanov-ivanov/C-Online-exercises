#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int m = 3;

    int *a = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };
    int *b = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };

    int *c =  {
        {0,0,0},
        {0,0,0},
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    int *p = &a;
    int *q = &b;
    int *k = &c;
    for(; p != a + n * m; p++,q++,k++) {
        *k = *p + *q;
        printf("%d ",*k);
    }


    return 0;
}
