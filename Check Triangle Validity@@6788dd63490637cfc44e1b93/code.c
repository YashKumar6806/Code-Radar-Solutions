#include <stdio.h>



int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int x = a*a;
    int y = b*b;
    int z = c*c;
    int sum1 = x+y;
    int sum2 = z;
    int sum3 = x+z;
    int sum4 = y;
    int sum5 = y+z;
    int sum6 = x;

    if((sum1 == sum2 || sum3 == sum4) || (sum5 == sum6)) {
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}





















