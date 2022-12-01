#include<stdio.h>
#include<string.h>

void makeOddAndEvenArray(int n, int k){
  int arr[100],ind=-1, positionValue;
  for(int i=2; i<=n; i+=2){
  arr[ind+=1]=i;
  }
  for(int i=1; i<=n; i+=2){
  arr[ind+=1]=i;
  }
for(int i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n");
  printf("The %dth element in this sequence is %d.",k,positionValue=arr[k-1]);
}

void main()
{
    int result, n, k;
    scanf("%d %d",&n,&k);
    makeOddAndEvenArray(n,k);
}