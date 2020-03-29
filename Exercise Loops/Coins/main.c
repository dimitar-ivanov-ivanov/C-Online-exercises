#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 15

int main() {
    int digit,i;
    int n = 3;
    int counter = 0;
    int coins[] = {1,2,5};
    char num[LEN];
    scanf("%s",num);

    for(int j = 0; j < strlen(num); j++) {
        if(num[j] == '.') {
            continue;
        }
        digit = num[j] - '0';
        while(digit > 0) {
            for(i = n-1; i >= 0; i--) {
                if(digit >= coins[i]) {
                    digit -= coins[i];
                    counter++;
                    break;
                }
            }
        }
    }

    printf("%d",counter);
    return 0;
}
