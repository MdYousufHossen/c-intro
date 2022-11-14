#include<stdio.h>
int main(){
    int n;
    int j, highest=0,arr[100], output=0;

    scanf("%d", &n);
    
    // get all marks
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    };

// get highest mark
   for(int i=0; i<n; i++){
   if(highest<arr[i]){
    highest=arr[i];
   }
   }
   for(int i=0; i<n; i++){
  output=highest-arr[i];
printf("%d",output);
printf(" ");
   }

   

    return 0;
}