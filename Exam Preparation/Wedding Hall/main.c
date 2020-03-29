#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double lenght,width,barSide;
    scanf("%lf %lf %lf",&lenght,&width,&barSide);
    double totalArea = lenght * width;
    double barArea = barSide * barSide;
    double danceFloor = totalArea * 19 / 100;
    totalArea -= barArea;
    totalArea -= danceFloor;
    double guests = totalArea / 3.2;

    printf("%d",(int)(ceil(guests)));
    return 0;
}
