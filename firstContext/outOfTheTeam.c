#include<stdio.h>

int main(){
    int n,K;
    int i,r,OC=0;

scanf("%d%d",&n,&K);
    for(i=0; i<n; i++){
        scanf("%d",&r);
        if(r<K){
            OC++;
        }
    }
    printf("%d",OC);

    return 0;
}