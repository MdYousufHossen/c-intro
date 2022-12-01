#include<stdio.h>
float CalcMedian(int ar[], int arraySize)
{
    float median;
    if(arraySize % 2 == 0){
        median=ar[(arraySize-1)/2]+ar[arraySize/2];
        median=median/2;
        printf("hello");
    }else{
        median = ar[arraySize/2];
    }
    return median;
}

int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
int result=CalcMedian(arr,n);
printf("\nresult--->%d",result);

return 0;
}