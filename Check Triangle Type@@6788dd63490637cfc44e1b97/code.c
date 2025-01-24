#include <stdio.h>



int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a==b && a==c)&& c==b){
        printf("Equilateral")
    }
    else if((a==b && a!=c) || b==c && b!=a || a==c && a!=b)printf("Isosceles");
    else{
        printf("Scalene");
    }
    return 0;
}