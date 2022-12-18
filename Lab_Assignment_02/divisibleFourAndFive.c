#include<stdio.h>
int divisible(int arr[],int n){
    int  count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0||arr[i]%3==0)
        count++;
    }
    if(count==0)
       return -1;
    else
        return count;
}
void main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("%d",divisible(arr,n));
    
}