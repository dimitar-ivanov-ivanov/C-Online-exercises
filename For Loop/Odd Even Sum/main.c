#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,num;
    scanf("%d",&n);
    int evenSum = 0;
    int oddSum = 0;

    for(i = 0; i < n; i++) {
        scanf("%d",&num);
        if(num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    if(evenSum == oddSum) {
        printf("Yes\nSum = %d",evenSum);
    } else {
        printf("No\nDiff = %d",abs(evenSum - oddSum));
    }

    return 0;
}
