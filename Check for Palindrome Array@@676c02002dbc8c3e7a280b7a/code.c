// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            printf("NO");
        }
        else{
            printf("YES");
        }
    }
}