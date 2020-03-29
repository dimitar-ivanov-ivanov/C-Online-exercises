#include <stdio.h>
#include <stdlib.h>

int main() {
    int count =0;
    int c = 0;
    int s = 0;
    int n;
    int con = 1;

    int *num = (int *)calloc(1,sizeof(int));

    while(con==1) {
        printf("Enter number:");
        scanf("%d",&n);
        nums[count] = n;
        printf("Press 0 to exit or 1 to continue:");
        scanf("%d",&con);
        if(con != 0) {
            //extend the array by one
            nums = (int *)realloc(nums,sizeof(int) +4);
        }
        count++;
    }

    printf("Your input numbers are:");

    for(c=0;c<=count;c++){
        printf("%d\t",nums[c]);
        s+=nums[c];
    }
    printf("\nThe sum of all input numbers: %d",s);
    return 0;
}
