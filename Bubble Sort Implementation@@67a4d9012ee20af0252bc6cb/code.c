// Your code here...
#include<stdio.h>
int sort(int a[100],int b){
    int max =a[0];
    for(int i=0;i<b;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int x[100],y;
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        scanf("%d",&x[i]);
    }
    int result = sort(x,y);
    printf("%d",result);
}







