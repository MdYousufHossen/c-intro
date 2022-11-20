#include<stdio.h>
int main(){
    int n,counter,max=0;
    scanf("%d\n",&n);
    char sings[n+1];
    fgets(sings, sizeof(sings),stdin);
     for(int i=0; i<(n+1); i++){
        printf("%c",sings[i]);
     }
     for(int i=0; i<n; i++){
     if(sings[i]==sings[i-1]){
      counter++;
     if(counter>max){
         max=counter;
     }
     }
     else{
        counter=1;
     }
    }
    printf("%d",max);

    return 0;
}