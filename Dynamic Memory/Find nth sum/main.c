#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int sum = 0;

    if(n == a || n == b || n == c) {
        return n;
    }

    sum =  find_nth_term(n - 1,a,b,c);
    sum += find_nth_term(n - 2,a,b,c);
    sum += find_nth_term(n - 3,a,b,c);
    return sum;
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
