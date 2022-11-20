#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n], ans=0;
    int temp=0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
     }
    }

    for(int i=1; i<n; i++){
       if((arr[0]+arr[i])%2==0){
        ans=arr[0]+arr[i];
        break;
       }
    }
    printf("%d",ans);
    return 0;
}