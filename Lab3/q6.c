#include <stdio.h>

int main(){

    int x1 = 5, y1 = 4;
    int x2 = 3, y2 = 2;

    float slope = (float)(y2 - y1) / (x2 - x1);
    printf("The slope of the line between the points (5,4) and (3,2) is: %.3f\n", slope);
    return 0;
}