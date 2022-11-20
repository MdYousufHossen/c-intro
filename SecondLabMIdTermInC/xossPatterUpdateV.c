#include<stdio.h>
int main(){

int n;
scanf("%d",&n);

for(int i=1; i<=n; i++){
     printf("%d",i);
        for(int j=2; j<=n; j++){
            if(i==1){
                printf("%d",j);  
            }else if(i==n){
                printf("%d",n); 
            } else if(j==n&&i!=n&&i!=1){
                printf("%d",n);  
            }else{
                printf(" ");  
            }
        }
     printf("\n");  
}
    return 0;
}