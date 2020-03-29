#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int *p;
    int counter = 1;
    int nums[10][10];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            p = &nums[i][j];
            *p = counter++;
        }
    }

    p = a;

    printf("%d %d %d\n",*p,*(p+1),*(p+2));
    printf("%d %d %d\n",a[0],a[1],a[2]);

    for(int *i = a; i < a + 10; i++) {
        printf("%d ",*i);
    }

    printf("\n");
    p = (int *)nums;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ",*(p + (i * 10) + j));
        }
        printf("\n");
    }

}
