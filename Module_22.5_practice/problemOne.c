#include<stdio.h>
#include<string.h>
int is_binary(char str[]){
    int len=strlen(str)-1;
    for(int i=0;i<len;i++){
        if(str[i]!='0'&&str[i]!='1')
        return 0;
    }
    return 1;
}
void main(void){
    char str[100];
    fgets(str,sizeof(str),stdin);
    if(is_binary(str)==1)
        printf("Yes");
    else
        printf("No");
}