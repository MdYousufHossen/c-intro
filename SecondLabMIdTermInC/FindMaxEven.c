#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int =0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,sum=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i+1; j<n; j++)
        {
            sum=a[i]+a[j];
            if(sum%2==0)
            {
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}