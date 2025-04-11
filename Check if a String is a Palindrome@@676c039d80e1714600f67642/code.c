// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char string[100];
    char temp;
    scanf("%s",str);
    int len=0;
    while(s[len]!=0){
        len++;
    }
    for(int=0;len<l/2;i++){
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