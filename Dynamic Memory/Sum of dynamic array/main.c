#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,*arr,i,sum;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(n));

    sum = 0;
    for(i = 0; i < n; i++) {
        scanf("%d",arr + i);
        sum += *(arr + i);
    }

    free(arr);
    printf("%d",sum);
    return 0;
}
