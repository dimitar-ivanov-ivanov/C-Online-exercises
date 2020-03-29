#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORDS 20
#define LEN 200

int main() {
    char vowels['z'];
    char input[LEN];
    gets(input);
    int sum =  0;

    for(int i = 0; i < 'z'; i++) {
        vowels[i] = 0;
    }

    vowels['a']=1;
    vowels['e']=2;
    vowels['i']=3;
    vowels['o']=4;
    vowels['u']=5;

    for(int i = 0; i < strlen(input); i++) {
        sum += vowels[input[i]];
    }
    printf("%d",sum);
    return 0;
}
