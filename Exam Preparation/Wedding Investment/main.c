#include <stdio.h>
#include <stdlib.h>

#define LEN 25

int main() {
    char contractPeriod[LEN];
    char contractType[LEN];
    char dessertAdded[LEN];
    int monthsOfPayment;

    scanf("%s %s %s %d",contractPeriod,contractType,dessertAdded,&monthsOfPayment);

    char periodFirst = contractPeriod[0];
    char typeFirst = contractType[0];
    char dessertFirst = dessertAdded[0];
    double price = 0;

    switch (periodFirst) {
    case 'o':
        switch (typeFirst) {
        case 'S':
            price = 9.98;
            break;
        case 'M':
            price = 18.99;
            break;
        case 'L':
            price = 25.98;
            break;
        case 'E':
            price = 35.99;
            break;
        default:
            break;
        }
        break;
    case 't':
        switch (typeFirst) {
        case 'S':
            price = 8.58;
            break;
        case 'M':
            price = 17.09;
            break;
        case 'L':
            price = 23.59;
            break;
        case 'E':
            price = 31.79;
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }

    if(dessertFirst == 'y') {
        if(price < 10) {
            price += 5.5;
        } else if(price < 30) {
            price += 4.35;
        } else {
            price += 3.85;
        }
    }

    if(periodFirst == 't'){
        price -= price * 3.75 / 100;
    }

    price *= monthsOfPayment;
    printf("%.2lf lv.",price);
}
