#include <stdio.h>
#include <stdlib.h>

int main() {
    char *p = "stop";
    char str[80];

    printf("Enter a string:");
    gets(str);
    while(strcmp(p,str)) {
        printf("Enter a string:");
        gets(str);
    }

    return 0;
}

