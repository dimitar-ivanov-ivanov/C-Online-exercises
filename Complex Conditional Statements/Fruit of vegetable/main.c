#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 20

int main() {

    char input[LEN];
    scanf("%s",input);

    int checkIsFruit = !strcmp(input,"banana") ||
                       !strcmp(input,"apple") ||
                       !strcmp(input,"kiwi") ||
                       !strcmp(input,"cherry") ||
                       !strcmp(input,"lemon") ||
                       !strcmp(input,"grapes");

    int checkIsVegetable = !strcmp(input,"tomato") ||
                           !strcmp(input,"cucumber") ||
                           !strcmp(input,"pepper") ||
                           !strcmp(input,"carrot");

    if(checkIsFruit) {
        printf("fruit");
    } else if(checkIsVegetable) {
        printf("vegetable");
    } else {
        printf("unknown");
    }

    return 0;
}
