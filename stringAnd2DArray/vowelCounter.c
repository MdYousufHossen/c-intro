#include<stdio.h>
int main(){
    char sen[100];
    fgets(sen,sizeof(sen),stdin);
    int counter=0;
 
   for(int i=0; sen[i]!='\0'; i++){
       
        if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u' ){
            counter++;
        }
    }
 printf("vowel counter ===> %d",counter);
    return 0;
}