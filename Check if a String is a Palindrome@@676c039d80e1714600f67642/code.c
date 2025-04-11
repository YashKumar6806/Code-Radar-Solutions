// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char string[100]=str[100];
    char temp;
    scanf("%s",str);
    int l=0;
    while(str[l]!=0){
        l++;
    }
    for(int i=0;i<l/2;i++){
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    if(str==string){
        printf("Yes");
    }
    else{
        printf("No");
    }
}