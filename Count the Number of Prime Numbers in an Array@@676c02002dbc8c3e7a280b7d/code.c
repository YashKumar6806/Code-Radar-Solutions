// Your code here... 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            count+=1;
        }
        else if(a[i]>=3){
            if(a[i]%i==0){
                count+=1;
            }
        }
    }
    printf("%d",count);
}
