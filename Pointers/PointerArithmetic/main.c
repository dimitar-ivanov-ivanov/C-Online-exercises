#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    float *p1;
    long *p2;
    short *p3;
    char *p4;

    p = p1 = p2 = p3 = p4 = 200;

    p++;
    p2++;
    p1++;
    p3++;
    p4++;

    printf("%d %d %d %d %d\n",p,p1,p2,p3,p4);

    //printf("%d",*p++); increments p and returns value of new incremented address
    // printf("%d",(*p)++); returns value of address and increments it

    int q = 1;
    int *pq;

    pq = &q;
    (*pq)++;
    printf("%d %d",q,pq);

    return 0;
}
