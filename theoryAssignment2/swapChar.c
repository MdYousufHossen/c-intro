#include<stdio.h>
#include<string.h>

int isSmallLetter(char c);

 void main(){
    char n[100];
    fgets(n,sizeof(n),stdin);
    int len=strlen(n)-1;
    for(int i=0; i<len; i++){
       if(isSmallLetter(n[i])==1)
            n[i]=n[i]-32;
        else
            n[i]=n[i]+32;
    }
    puts(n); 
 }

 int isSmallLetter(char c){
 if(c>='a'&&c<='z'){
    return 1;       
    }
    return 0;
}
