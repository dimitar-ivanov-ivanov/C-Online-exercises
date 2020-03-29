#include <stdio.h>
#include <stdlib.h>

char strlen(char *s);


int main() {
    int i;
    char str1[] = "Hello";
    char str2[] = "Hello";
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(i = 0; i < len1; i++) {
        if(str1[i] != str2[i]) {
            printf("Not equal.");
            return 0;
        }
    }

    printf("Equal.");
    return 0;
}

int strlen(char *s) {
    char *p = s;
    for(; *p != '\0'; p++) {}
    return p - s;
}

