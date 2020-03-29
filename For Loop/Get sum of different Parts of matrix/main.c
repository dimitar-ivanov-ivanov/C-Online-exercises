#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,m,s1,s2,s3,s4,i,j,counter;
    n = m = 8;
    int arr[n][m];
    srand(time(NULL));
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            arr[i][j] = rand() % 10;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //s1
    s1 = 0;
    for(i = 0; i < n /2; i++) {
        for(j = i+1; j < n-1-i; j++) {
            s1 += arr[i][j];
        }
    }

    s3 = 0;
    for(int i = n-1,counter = 1; i >= n/2 + 1; i--,counter++) {
        for(int j = n - i; j < n - counter; j++) {

        }
    }

    printf("%d",s1);

    return 0;
}
