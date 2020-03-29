#include <stdio.h>
#include <stdlib.h>
int main() {
    double age;
    char gender;
    scanf("%lf %c",&age,&gender);

    switch (gender) {
    case 'm':
        if(age >= 16) {
            printf("Mr.");
        } else if(age>=0 && age< 16) {
            printf("Master");
        }
        break;
    case 'f':
        if(age >= 16) {
            printf("Ms.");
        } else if(age < 16 && age >=0) {
            printf("Miss");
        }
        break;
    default:
        break;
    }

    return 0;
}
