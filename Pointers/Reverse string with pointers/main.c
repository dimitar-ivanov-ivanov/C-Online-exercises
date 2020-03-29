#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "pointers are fun";
    char str2[50],*p1,*p2;
    p2 = str2;
    p1 = str1 + strlen(str1) - 1;

    while(p1 >= str1){
        *p2++ = *p1--;
    }

    *p2 = '\0';
    printf("%s",str2);

    return 0;
}
