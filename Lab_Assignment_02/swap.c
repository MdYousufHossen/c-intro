#include<stdio.h>
 void swap(int*l,int*r){
    int temp = *l;
   *l=*r;
   *r=temp;
 }
 
 void main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int q;
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        int * left=&arr[l];
        int * right=&arr[r];
        swap(left,right);
    }
     for(int i=1; i<=n;i++){
        printf("%d, ",arr[i]);
    }
 }