#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 50

int main() {
    int days;
    char roomType[LEN];
    char evaluation[LEN];

    scanf("%d",&days);
    scanf("%s",roomType);
    fflush(stdin);
    scanf("%s",evaluation);

    int nights = days-1;
    double result = 0;

    if(nights > 15) {
        if(!strcmp("room",roomType)) {
            result = nights * 18;
        } else if(!strcmp("apartment",roomType)) {
            result = nights*25;
            result -= result * 0.5;
        } else {
            result = nights*35;
            result -= result * 0.2;
        }
    } else if(nights >= 10) {
        if(!strcmp("room",roomType)) {
            result = nights*18;
        } else if(!strcmp("apartment",roomType)) {
            result = nights*25;
            result -=result * 0.35;
        } else {
            result = nights*35;
            result -=result * 0.15;
        }
    } else {
        if(!strcmp("room",roomType)) {
            result = nights*18;
        } else if(!strcmp("apartment",roomType)) {
            result = nights*25;
            result -=result * 0.3;
        } else {
            result = nights*35;
            result -=result * 0.1;
        }
    }

    if(!strcmp("positive",evaluation)) {
        result += result * 0.25;
    } else {
        result -= result * 0.1;
    }

    printf("%.2lf",result);
    return 0;
}
