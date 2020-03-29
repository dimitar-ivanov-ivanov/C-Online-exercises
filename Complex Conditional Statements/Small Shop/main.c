#include <stdio.h>
#include <stdlib.h>

#define LEN 20

int main() {
    char product[LEN];
    char city[LEN];
    char firstLetterProduct;
    char firstLetterCity;
    double quality;
    scanf("%s %s %lf",product,city,&quality);

    firstLetterProduct = product[0];
    firstLetterCity = city[0];

    double prices['z']['z'];
    prices['S']['c'] = 0.5;
    prices['S']['w'] = 0.8;
    prices['S']['b'] = 1.2;
    prices['S']['s'] = 1.45;
    prices['S']['p'] = 1.6;

    prices['P']['c'] = 0.4;
    prices['P']['w'] = 0.7;
    prices['P']['b'] = 1.15;
    prices['P']['s'] = 1.30;
    prices['P']['p'] = 1.5;

    prices['V']['c'] = 0.45;
    prices['V']['w'] = 0.7;
    prices['V']['b'] = 1.10;
    prices['V']['s'] = 1.35;
    prices['V']['p'] = 1.55;

    double result = quality * prices[firstLetterCity][firstLetterProduct];
    printf("%g",result);
    return 0;
}
