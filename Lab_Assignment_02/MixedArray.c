#include<stdio.h>
int check_prime(int arr[], int n){
    int count=0;
    for(int i=0; i<n;i++){
       for(int j=2; j<arr[i]; j++){
         if(arr[i]%j==0)
            count++;  
            
       }
    }
  return count;
}

float average_num(int arr[],int n){
    int sum=0, count=0 ;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
            count++;
        }   
    }
    float aver=  sum/count;
    return aver;
}
void main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("Prime numbers: %d\n", check_prime(arr,n));
   printf("Average of all even integers: %.2f", average_num(arr,n));
}