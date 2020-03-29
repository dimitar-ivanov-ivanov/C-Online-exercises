#include <stdio.h>
#include <stdlib.h>

int findLen(char *s);
int firstIndexOf(char *s,char m);
int lastIndexOf(char *s,char m);

int main() {
    char *s = "my my my";
    printf("%s %d\n",s,firstIndexOf(s,'m'));
    printf("%s %d",s,lastIndexOf(s,'m'));

    return 0;
}

int firstIndexOf(char *s,char m) {
    char *p = s;
    for(; *p != '\0'; p++) {
        if(*p == m) {
            return p - s;
        }
    }
    return -1;
}

int lastIndexOf(char *s,char m) {
    char *p = s + findLen(s);
    for(; p != s; p--) {
        if(*p == m) {
            return p - s;
        }
    }
    return -1;
}

int findLen(char *s) {
    char *p = s;
    for(; *p != '\0'; p++) {
    }
    return p - s;
}
