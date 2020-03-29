#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,i,j,k,p,mainDiagonal,sideDiagonal,first,second,third,fourth;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    for(i = a; i <= b; i++) {
        first = i;
        for(j = a; j <= b; j++) {
            if(j == i) {
                continue;
            }
            second = j;
            for(k = c; k <= d; k++) {
                third = k;
                for(p = c; p <= d; p++) {
                    if(k == p) {
                        continue;
                    }
                    fourth = p;
                    mainDiagonal = first + fourth;
                    sideDiagonal = third + second;
                    if(mainDiagonal != sideDiagonal) {
                        continue;
                    }
                    printf("%d%d\n%d%d\n\n",first,second,third,fourth);
                }
            }
        }
    }

    return 0;
}
