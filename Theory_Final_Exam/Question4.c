#include<stdio.h>
#include<string.h>
void main(void){
    char str[100],chTemp;
    fgets(str, sizeof(str),stdin);
    int len=strlen(str)-1;
    for(int i=0; i<len; i++){
        for(int j=0; j<len;j++){
           if(str[j]>str[j+1]){
             chTemp=str[j];
            str[j]=str[j+1];
            str[j+1]=chTemp;
           }
        }
    }
    puts(str);
}