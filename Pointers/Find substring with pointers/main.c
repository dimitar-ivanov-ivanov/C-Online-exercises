#include <stdio.h>
#include <stdlib.h>

int findLen(char *s);
int findSubstring(char *s1,char *s2);

int main() {
    char *s1 = "Hello world";
    char *s2 = "world";
    printf("%d",findSubstring(s1,s2));
    return 0;
}

int findSubstring(char *s1,char *s2) {
    char *p = s1;
    char *q = s2;
    int flag = 0;
    int len1 = findLen(s1);
    int len2 = findLen(s2);

    if(len2 > len1) {
        return -1;
    }

    for(; *p !='\0'; p++) {
        flag = 0;
        q = s2;
        for(; *q != '\0'; q++) {
            if(*(p + (q -s2)) != *q) {
                flag = 1;
                break;
            }

        }

        if(!flag) {
            return p - s1;
        }
    }

    return -1;
}

int findLen(char *s) {
    char *p = s;
    for(; *p != '\0'; p++) {}
    return p - s;
}
