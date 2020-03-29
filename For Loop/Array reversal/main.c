#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,*arr,*reversed;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    reversed = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        scanf("%d",arr + i);
    }

    for(int i = 0; i < n; i++) {
        *(reversed +n - i - 1) = *(arr +i);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ",reversed[i]);
    }

    free(arr);
    free(reversed);
    return 0;
}
