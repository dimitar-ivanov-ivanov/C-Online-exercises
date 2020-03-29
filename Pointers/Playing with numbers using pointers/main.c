#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int c;
    int *p = &a;
    int *q = &b;
    *p = 1;
    *q = 2;

    c = *p + *q;
    printf("%d %d %d\n",a,b,c);

    int temp = *p;
    *p = *q;
    *q = temp;

    printf("%d %d %d",a,b,c);

    return 0;
}
