// pass by refernce.........
#include<stdio.h>
void swap(int*p, int*q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void main(){
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("a= %d,b= %d",a,b);
}

// pass by value............
void swap(int num1, int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
void main(){
    int a=10;
    int b=20;
    swap(a,b);
    printf("a= %d,b= %d",a,b);
}