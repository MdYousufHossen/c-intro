#include<stdio.h>
void main(){
    int n;
    printf("Enter some positive integer: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k,counter=0;
    scanf("%d",&k);
    for(int i=0; i<n; i++){
       if(arr[i]!=k)
            counter++;
    }

    printf("Output: %d",counter);
}