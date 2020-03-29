#include <stdio.h>
#include <stdlib.h>

int strlen(char *s);
int strcmp(char *s1,char *s2);

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    int *p = str1;
    int *q = str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not equal.");
        return 0;
    }

    if(!strcmp(str1,str2)) {
        printf("Equal.");
    } else {
        printf("Not equal.");
    }

    return 0;
}

int strcmp(char *s1,char *s2) {
    char *p = s1;
    char *q = s2;

    for(; *p !='\0'; p++,q++) {
        if(*p != *q) {
            return 1;
        }
    }
    return 0;
}

int strlen(char *s) {
    char *p = s;
    for(; *p != '\0'; p++) {}
    return p - s;
}
