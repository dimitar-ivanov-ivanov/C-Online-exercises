#include <stdio.h>
#include <stdlib.h>

int main() {
    //char *p1 = "Hello";
    char *p[] = {"Hello","My","Friend"};
    char *q = p;

    while(*q) {
        printf("%s ",*q);
        q++;
    }

    return 0;
}
