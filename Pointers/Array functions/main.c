#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int getCount(int *l,int *r);
int getMax(int *l,int *r);
int getMin(int *l,int *r);
int getSum(int *l,int *r);
int getEvenCount(int *l,int *r);
int getOddCount(int *l,int *r);
void reverse(int *l,int *r,int n,int a[n+1]);
int findNum(int *l,int *r,int num);
int getMax(int *l,int *r);


int main() {

    int n,i,sum;
    scanf("%d",&n);
    int a[n + 1];
    int *l = a;
    int *r = a + n;
    sum = 1;
    for(i = 0; i < n; i++) {
        a[i] = sum++;
    }
    a[n] = -1;

    printf("%d\n",getCount(l,r));
    printf("%d\n",getMax(l,r));
    printf("%d\n",getMin(l,r));
    printf("%d\n",getSum(l,r));
    printf("%d\n",getEvenCount(l,r));
    printf("%d\n",getOddCount(l,r));


    return 0;
}

int getCount(int *l,int *r) {
    int count =0;
    int *p = l;
    while(*p != *r) {
        count++;
        p++;
    }
    return count;
}

int getMax(int *l,int *r) {
    int max = INT_MIN;
    int *p = l;

    while(*p != *r) {
        if(*p >= max) {
            max = *p;
        }
        p++;
    }
    return max;
}

int getMin(int *l,int *r) {
    int min = INT_MAX;
    int *p = l;

    while(*p != *r) {
        if(*p <= min) {
            min = *p;
        }
        p++;
    }
    return min;
}

int getSum(int *l,int *r) {
    int sum =0;
    int *p = l;
    while(*p != *r) {
        sum += (*p);
        p++;
    }
    return sum;
}

int getEvenCount(int *l,int *r) {
    int evenCount = 0;
    int *p = l;
    while(*p != *r) {
        if(*p % 2 == 0) {
            evenCount++;
        }
        p++;
    }
    return evenCount;
}

int getOddCount(int *l,int *r) {
    int oddCount = 0;
    int *p = l;
    while(*p != *r) {
        if(*p % 2 != 0) {
            oddCount++;
        }
        p++;
    }
    return oddCount;
}
