#include <stdio.h>
#include <stdlib.h>

int main() {
    int age,toyPrice,i;
    double washingMachinePrice;
    scanf("%d %lf %d",&age,&washingMachinePrice,&toyPrice);
    int toys =0;
    double money = 0;
    int moneyCounter = 10;
    int moneyAddition = 10;

    for(i = 1; i <= age; i++) {
        if(i % 2 == 0) {
            money += moneyCounter;
            moneyCounter += moneyAddition;
            money -= 1;
        } else {
            toys++;
        }
    }

    money += toys * toyPrice;

    if(money >= washingMachinePrice) {
        printf("Yes! %.2lf",money - washingMachinePrice);
    } else {
        printf("No! %.2lf",washingMachinePrice - money);
    }


    return 0;
}
