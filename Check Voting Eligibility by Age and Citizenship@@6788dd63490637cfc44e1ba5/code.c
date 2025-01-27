#include <stdio.h>


int main() {
    int age,ct;
    scanf("%d",&age);
    scanf("%d",&ct);


    if(age<=18 && ct == 1 ) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}