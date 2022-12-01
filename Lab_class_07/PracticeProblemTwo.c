#include<stdio.h>
void find_max_min(int n, int arr[],int *p, int *q){
    *p=arr[0];
    *q=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>*p)
            *p=arr[i];
        if(arr[i]<*q)
        *q=arr[i];
    }
}
void main(void){
    int arr[]={12,6,9,3,4,21,66};
    int n=7;
    int maxx, minn;
    find_max_min(n,arr,&maxx,&minn);
    printf("%d %d \n",maxx, minn);
}