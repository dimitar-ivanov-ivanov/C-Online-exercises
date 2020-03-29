#include <stdio.h>
#include <stdlib.h>

#define BALLOONS 0.1
#define FLOWERS 1.5
#define CANDLES 0.5
#define RIBBONS 2
#define LEN 25

int main() {
    double budget,*p;
    int count,flag;
    char str[LEN];
    scan("%lf",&budget);
    *p = budget;

    while(*p >= 0) {
        scanf("%s %d",str,&count);
        switch (str[0]) {
        case 'b':
            *p -= BALLOONS * count;
            break;
        case 'f':
            *p -= FLOWERS * count;
            break;
        case 'c':
            *p -= CANDLES * count;
            break;
        case 'r':
            *p -= RIBBONS * count;
            break;
        case 's':
            flag = 1;
            break;
        default:
            break;
        }
        if(flag == 1){
            break;
        }
    }

    return 0;
}
