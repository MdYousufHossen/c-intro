#include<stdio.h>
int main(){
    int n,counter=1,max=0;
    scanf("%d\n",&n);
    char sings[n];
    fgets(sings, sizeof(sings),stdin);
     for(int i=0; i<(n-1); i++){
     if(sings[i]==sings[i+1]){
      counter++;
     }else {
        if(counter>max){
         max=counter;
            }
        counter=1;
     }
    }
    if(counter>max)
    max=counter;
    printf("%d\n",max);

    return 0;
}