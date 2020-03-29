#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "Alabala alabala";
    char *p;
    p = str;
    int flag = 0;

    while(*p) {
        if(*p++ == ' ') {
            flag = 1;
        }
        if(flag == 1){
            printf("%c",*p);
        }
    }

    return 0;
}
