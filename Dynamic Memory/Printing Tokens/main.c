#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1001

int main() {
    char *s;
    char *current;
    s = (char *)malloc(LEN * sizeof(char));
    gets(s);

    for(char *c=s; *c != NULL; c++) {
        if(*c==' ') {
            *c='\n';
        }
    }
    printf("%s",s);
    free(s);
    return 0;
}
