// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int count=n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            count-=1;
        }
        
    }
    printf("%d",count);
}