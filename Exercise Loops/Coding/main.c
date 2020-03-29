#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

int main() {
    char input[LEN];
    int digit,i,j,code;
    scanf("%s",input);

    for(i = strlen(input) - 1; i >= 0; i--) {
        digit = input[i] - '0';
        if(digit == 0) {
            printf("ZERO\n");
            continue;
        }
        code = digit + 33;
        for(j = 0; j < digit; j++) {
            printf("%c",code);
        }
        printf("\n");
    }
    return 0;
}
