#include <stdio.h>
#include <stdlib.h>

void print(char *p);

int main() {
    char str[] = "Pointers are fun";
    char *p;
    int i;
    p = str;

    print(p);
    *str = 'p';
    print(p);

    return 0;
}

void print(char *p) {
    //until we find null value
    for(int i=0; p[i]; i++) {
        printf("%c",p[i]);
    }
    printf("\n");
}
