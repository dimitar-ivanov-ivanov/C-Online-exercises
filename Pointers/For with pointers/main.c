#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    for(int i = 0; i < 10; i++) {
        p = &i;
        printf("%d",*p);
    }
    return 0;
}
