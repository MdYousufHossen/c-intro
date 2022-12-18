#include<stdio.h>

void main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int temp;
    for(int i=0; str[i]!='\0'; i++){
        for(int j=i+1; str[j]!='\0';j++){
            if(str[i]<str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
   puts(str);
}