#include<stdio.h>

void changeStr(char x[]){
    for(int i=0; i!='\0'; i++){
        x[i]=x[i]+5;
    }
    for (int i=0; i
    1!='\0';i++){
        printf("%c",x[i]);
    }
    // return  "d";
}

int main(){

    char str[100],output;
    fgets(str,sizeof(str),stdin);
    changeStr(str);
// printf("%c",output);
    return 0; 
}