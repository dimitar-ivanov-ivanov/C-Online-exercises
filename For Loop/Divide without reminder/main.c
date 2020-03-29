#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,num;
    scanf("%d",&n);
    double divisibleByTwo = 0;
    double divisibleByThree = 0;
    double divisibleByFour = 0;

    for(i = 0; i < n; i++) {
        scanf("%d",&num);
        if(num % 2 == 0) {
            divisibleByTwo++;
        }
        if(num % 3 == 0) {
            divisibleByThree++;
        }
        if(num % 4 == 0) {
            divisibleByFour++;
        }
    }

    int res = divisibleByTwo / n * 100;
    printf("%.2lf%%\n",divisibleByTwo / n * 100);
    printf("%.2lf%%\n",divisibleByThree / n * 100);
    printf("%.2lf%%",divisibleByFour / n * 100);

    return 0;
}
