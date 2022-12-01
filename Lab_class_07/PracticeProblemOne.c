#include<stdio.h>
void print_hash(int n){
    int i;
    for(i=0;i<n;i++){
        printf("#");
    }
     printf("\n");
}

void main(void){
    int n;
    scanf("%d",&n);
   for(int i=1; i<=n;i++){
     print_hash(i);
    
   }
}