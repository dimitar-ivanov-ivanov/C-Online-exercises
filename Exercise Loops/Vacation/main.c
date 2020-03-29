#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10

int main() {
    double vacationCost,budget,amount;
    char keyWord[LEN];
    int spendCounter = 0;
    int days = 0;

    scanf("%lf %lf",&vacationCost,&budget);
    while(1) {
        scanf("%s %lf",keyWord,&amount);
        days++;

        if(!strcmp("spend",keyWord)) {
            spendCounter++;
            if(spendCounter == 5) {
                printf("You can't save the money.\n%d",spendCounter);
                return 0;
            }

            budget -= amount;
            if(budget < 0) {
                budget = 0;
            }
        } else if(!strcmp("save",keyWord)) {
            spendCounter = 0;
            budget += amount;
            if(budget >= vacationCost) {
                printf("You saved the money for %d days.",days);
                return 0;
            }
        }
    }
    return 0;
}
