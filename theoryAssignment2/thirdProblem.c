#include<stdio.h>
#include<string.h>

int checkStr(int s);

void main()
{
    char str[21] ;
    fgets(str,sizeof(str),stdin);
    int flag=0,len=strlen(str)-1;

    for(int i=0; i<len; i++)
    {
        if(checkStr(str[i])==1)
             flag++;  
    }
    if(flag>3)
        printf("Yes");
    else
        printf("No");
}
int checkStr(int s)
{
    if(s=='1'||s=='9'||s=='7')
           return 1;
     return 0;
}