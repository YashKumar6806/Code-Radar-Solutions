#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    if (n==0 || n<100) printf("Out of range");
    else printf("In range");
    return 0;
}