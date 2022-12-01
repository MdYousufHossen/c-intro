#include<stdio.h>

int sum_of_digits(int n);
int is_prime(int sod);

void main(void){
    int n;
    scanf("%d",&n);
    if(is_prime(sum_of_digits(n))==1)
        printf("Yousuf's Number\n");
    else
        printf("NO\n");
}

int sum_of_digits(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int is_prime(int sod){
    for(int i=2; i<sod; i++){
        if(sod%i==0)
            return 0;
    }
    return 1;
}