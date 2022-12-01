#include<stdio.h>
#include<string.h>

char *changeStr(char x[]);
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *output= changeStr(str);
    puts(output);
    return 0; 
}
char *changeStr(char x[]){
     int len=strlen(x)-1;
    for(int i=0; i<len; i++){
        if(x[i]=='v')
            x[i]=97;
        else if(x[i]=='w')
            x[i]=98;
        else if(x[i]=='x')
            x[i]=99;
        else if(x[i]=='y')
            x[i]=100;
        else if(x[i]=='z')
            x[i]=101;
        else
            x[i]=x[i]+5; 
    }
    return  x;
}