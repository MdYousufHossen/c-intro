#include<stdio.h>

int get_factorial(int n);
int check_ratio(int num1, int num2);
int get_GCF(int num1,int num2);
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    check_ratio(num1,num2);
    return 0;
}
int check_ratio(int num1, int num2){
    int factOne=get_factorial(num1);
    int factTwo=get_factorial(num2);
    double ratio=factOne/factTwo;
    printf("%d",factOne/factTwo); 
}

int get_factorial(int n){
    int factoral=1;
    for(int i=1; i<=n; i++){
        factoral*=i;
    }
   return factoral;
}
int get_GCF(int num1,int num2){
    for(int i=num1; i>=1;i--){
        if(num1%i==0&&num2%i==0)
            return i;
    }
}