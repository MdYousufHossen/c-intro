#include<stdio.h>
#include<string.h>

int main(){
    int n,i,ind=1;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
        arr[i]=i+1;

    int calculate[100];
    for( i=0; i<n; i+=3)
    {
    
    int sum=0;
     for(int j=i; j<i+3; j++){
      if(j<n){
        sum+=arr[j];
      } 
     }
     calculate[ind++]=sum;
    
    }
    int sumOne=0, sumTwo=0;
    for(int i=1;i<ind;i++)
      { 
       
        if(i%2==0)
            sumOne+=calculate[i];
        else
            sumTwo+=calculate[i];
    }
     printf("%d ",sumTwo-sumOne);
return 0;

}