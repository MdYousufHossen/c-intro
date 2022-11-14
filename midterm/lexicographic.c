#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="chating";
    int length=strlen(a);
    char temp;

    for(int i=0;i<length-1;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            printf("\n");
        }
    }
    printf("%s",a);
}