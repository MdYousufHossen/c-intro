#include<stdio.h>
int main(){

int n;
scanf("%d",&n);

for(int i=1; i<=n; i++){
     printf("%d",i);
    if(i==1){
        for(int j=2; j<=n; j++){
            printf("%d",j);  
        }
    }
    
    if(i==n){
       for(int j=2; j<=n; j++){
            printf("%d",n);  
        } 
    }
     for(int j=2; j<=n; j++){
           if(j==n&&i!=n&&i!=1){
            printf("%d",n);  
           }else{
             printf(" ");  
           }
        }
     printf("\n");  
}
    return 0;
}