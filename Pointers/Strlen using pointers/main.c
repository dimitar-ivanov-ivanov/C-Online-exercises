#include <stdio.h>
#include <stdlib.h>

int strlen(char *s);

int main() {
    char str[] = "Hello";
    printf("%d",strlen(str));
    return 0;
}

int strlen(char *s) {
    char *p = s;
    for(; *p != '\0'; p++) {}
    return p - s;
}
