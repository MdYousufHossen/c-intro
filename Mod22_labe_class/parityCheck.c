#include<stdio.h>

int is_parity(int x);
int main(){
    int n;
    scanf("%d",&n);
    if(is_parity(n)==1)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
int is_parity(int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}