#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *p[][2] = {
        {"Red Delicious", "red"},
        {"Golden Delicious", "yellow"},
        {"Winesap", "red"},
        {"", ""}
    };

    for(int i = 0; *p[i][0]; i++) {
            if(!strcmp(p[i][1],"red")){
                printf("Yes\n");
            }
    }

    return 0;
}
