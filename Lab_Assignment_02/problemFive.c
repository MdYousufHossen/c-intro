#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n],ans=0;
   for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);
   } 
   
   
   for(int i=1;i<=n;i++){
    if(i%2==0&&arr[i]%2==0){
        ans+=arr[i]+i;
    }
   else if(i%2!=0&&arr[i]%2!=0){
        ans+=arr[i]+i;
    }
   } 

   printf("%d", ans);
   return 0;
}