#include<stdio.h>
#include<string.h>
void main(void){
    char str[100];
    scanf("%s", str);

    int i = 0, len = strlen(str);
    while(i <= len){
        printf("%c", str[i]);
        if(i % 2 != 0){
            printf("%c", str[i]);
        }
        i++;
    }
}