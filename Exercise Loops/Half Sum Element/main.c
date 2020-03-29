#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int sum  =0;
    int max =INT_MIN;

    for(i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        if(max < arr[i]) {
            max = arr[i];
        }
        sum += arr[i];
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == sum - arr[i]) {
            printf("Yes\nSum = %d",sum - arr[i]);
            return 0;
        }
    }

    printf("No\nDiff = %d",abs(max - (sum - max)));
    return 0;
}
