#include <stdio.h>
#include <stdlib.h>

char toUpper(char p);
char toLower(char p);

int main() {
    char str[] = "pointers are fun";
    char *p;
    p = str;

    while(*p) {
        *p = toUpper(*p);
        printf("%c",*p);
        p++;
    }

    printf("\n");
    p = str;
    while(*p){
        *p = toLower(*p);
        printf("%c",*p);
        p++;
    }

    return 0;
}

char toUpper(char p) {
    return (p - 'a' + 'A');
}

char toLower(char p) {
    return (p + 'a' - 'A');
}
