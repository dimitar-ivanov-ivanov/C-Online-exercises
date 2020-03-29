#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n,max;
    scanf("%d",&n);
    int *p = malloc(n);

    if(!p) {
        perror("Error allocating memory");
        exit(1);
    }


    max = INT_MIN;

    for(int i = 0; i < n; i++) {
        scanf("%d",&p[i]);
        if(p[i] > max) {
            max = p[i];
        }
    }

    printf("%d",max);
    return 0;
}
