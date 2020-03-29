#include <stdio.h>
#include <stdlib.h>

#define LEN 10001

int main() {
    int i,*digits,digit;
    digits = (int *)calloc(10,sizeof(int));
    char *s = (char *)malloc(LEN * sizeof(char));
    gets(s);

    for(char *c = s; *c != NULL; c++) {
        if(*c >= '0' && *c <= '9') {
            digit = *c - '0';
            *(digits + digit) +=1;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ",*(digits + i));
    }


    free(digits);
    free(s);
    return 0;
}
