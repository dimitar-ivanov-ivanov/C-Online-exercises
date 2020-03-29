#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    char ch;
    char *p[] = {"Yes","No"};
    scanf("%d %c %d %d",&a,&ch,&b,&c);

    switch (ch) {
    case '+':
        if(a + b == c) {
            printf(p[0]);
        } else {
            printf(p[1]);
        }
        break;
    case '-':
        if(a - b == c) {
            printf(p[0]);
        } else {
            printf(p[1]);
        }
        break;
    case '*':
        if(a * b == c) {
            printf(p[0]);
        } else {
            printf(p[1]);
        }
        break;
    case '/':
        if(a / b == c) {
            printf(p[0]);
        } else {
            printf(p[1]);
        }
        break;
    case '%':
        if(a % b == c) {
            printf(p[0]);
        } else {
            printf(p[1]);
        }
        break;

    default:
        break;
    }


    return 0;
}
