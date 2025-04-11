#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int l=0;
    char temp;
    while(s[l]!=0){
        l++;
    }
    for(int i=0;i<l/2;i++){
        temp = s[i];
        s[i] = s[l-1-i];
        s[l-1-i]=temp;
    }
    printf("%s",s);
}