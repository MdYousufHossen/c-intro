#include<stdio.h>
int sort_arr(int arr[],int n,int k){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }  
    }
    for (int i = 0; i <n ; i++)
    {
        printf("%d",arr[i]);
    }
    
       printf("\n %dth largest element %d\n %dth smallest element %d",k,arr[n-k],k, arr[k-1]);
    
    
    return 0;
}

void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int k;
    scanf("%d",&k);
     sort_arr(arr,n,k);

}