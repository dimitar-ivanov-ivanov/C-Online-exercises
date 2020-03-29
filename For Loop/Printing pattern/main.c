#include <stdio.h>
#include <stdlib.h>

#define MAX(i,j) i > j ? i : j

int main() {
    int n;
    scanf("%d",&n);
    int m = 2*n -1;
    int arr[m][m];

    int middleRow = m /2;
    int middleCol = m / 2;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            int rowDifference = abs(middleRow - i);
            int colDifference = abs(middleCol - j);

            int difference = MAX(rowDifference,colDifference);
            arr[i][j] = difference + 1;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
