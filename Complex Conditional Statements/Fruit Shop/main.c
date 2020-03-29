#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 20

int main() {

    char day[LEN];
    char product[LEN];
    double quality;
    double result;
    result =0;

    scanf("%s %s %lf",product,day,&quality);

    int isWeekDay = !strcmp("Monday",day) ||
                    !strcmp("Tuesday",day) ||
                    !strcmp("Wednesday",day) ||
                    !strcmp("Tuesday",day) ||
                    !strcmp("Friday",day);

    int isWeekEnd = !strcmp("Saturday",day) ||
                    !strcmp("Sunday",day);


    if(isWeekDay) {
        if(!strcmp("banana",product)) {
            result = 2.5;
        } else if(!strcmp("apple",product)) {
            result = 1.2;
        } else if(!strcmp("orange",product)) {
            result = 0.85;
        } else if(!strcmp("grapefruit",product)) {
            result = 1.45;
        } else if(!strcmp("kiwi",product)) {
            result = 2.7;
        } else if(!strcmp("pineapple",product)) {
            result = 5.5;
        } else if(!strcmp("grapes",product)) {
            result = 3.85;
        }
    } else if(isWeekEnd) {
        if(!strcmp("banana",product)) {
            result = 2.7;
        } else if(!strcmp("apple",product)) {
            result = 1.25;
        } else if(!strcmp("orange",product)) {
            result = 0.9;
        } else if(!strcmp("grapefruit",product)) {
            result = 1.6;
        } else if(!strcmp("kiwi",product)) {
            result = 3;
        } else if(!strcmp("pineapple",product)) {
            result = 5.6;
        } else if(!strcmp("grapes",product)) {
            result = 4.2;
        }
    } else {
        printf("error");
        return 0;
    }

    result *= quality;
    printf("%.2lf",result);
    return 0;
}
