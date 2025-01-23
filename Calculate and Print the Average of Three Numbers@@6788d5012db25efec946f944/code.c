#include <stdio.h>



int main() {
    float x,y,z;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    int sum = x+y+z;
    printf("Average: %.2f",sum/3);
    return 0;
}