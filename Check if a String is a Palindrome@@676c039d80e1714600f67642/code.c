#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    char string[100];

    scanf("%s", str);
    strcpy(string, str); 

    int l = strlen(str); 
    for(int i = 0; i < l / 2; i++) {
        temp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = temp;
    }

    if(strcmp(str, string) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
