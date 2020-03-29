#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,num;
    scanf("%d",&n);
    int left =0;
    int right =0;
    for(int i = 0; i < n; i++) {
        scanf("%d",&num);
        left += num;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d",&num);
        right += num;
    }

    if(left == right) {
        printf("Yes,sum = %d",left);
    } else {
        printf("No,diff = %d",abs(left - right));
    }

    return 0;
}
