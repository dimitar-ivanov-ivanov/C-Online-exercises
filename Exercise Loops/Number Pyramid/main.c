#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int counter = 0;

    for(i = 0; counter < n; i++) {
        for(j = 0; j <= i; j++) {
            counter++;
            if(counter > n){
                return 0;
            }
            printf("%d ",counter);
        }
        printf("\n");
    }

    return 0;
}
