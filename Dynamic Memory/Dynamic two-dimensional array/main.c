#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    int **temp;
    int **nums = (int**) calloc(1,sizeof(int));
    nums[0] =(int*)calloc(1,sizeof(int));

    //initialize the 1*1 two-dimensional array
    nums[0][0] = 100;

    printf("1 element of array before extending%d\t",nums[0][0]);

    //extend, the two-dimensional array 5*5
    temp =(int **)calloc(5,sizeof(int));

    if(!temp) {
        printf("Error\n");
        exit(100);
    } else {
        for(i = 0; i < 5; i++) {
            temp[i] = (int *)calloc(5,sizeof(int));
        }
    }

    temp[0][0] = nums[0][0];
    nums = temp;

    //initialize the extendd two-dimensional array
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(nums[i][j] == 0) {
                nums[i][j] = 1000;
            }
        }
    }

    printf("\nElements of array after extending.\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d\t",nums[i][j]);
        }
        printf("\n");
    }

    free(nums);

    return 0;
}
