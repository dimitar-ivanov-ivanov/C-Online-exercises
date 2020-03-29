#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

int main() {
    char bookToFind[LEN];
    char currentBook[LEN];
    int capacity,i;
    gets(bookToFind);
    scanf("%d",&capacity);
    fflush(stdin);

    for(i = 0; i < capacity; i++) {
        gets(currentBook);
        fflush(stdin);
        if(!strcmp(currentBook,bookToFind)) {
            printf("You checked %d books and found it.",i);
            return 0;
        }
    }

    printf("The book you search is not here!");
    printf("You checked %d books.",capacity);
    return 0;
}
