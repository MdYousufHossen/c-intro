#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    char s[111];
    int i, n, c=0;
    while (t--){
        scanf("%s",s);
        n=strlen(s);
        int flag=0;
        for(i=0; i<n/2; i++){
            if(s[i]!=s[n-i-1]){
                flag=1;
                break;
            }
             }
            if(flag){
                printf("Case #1: Not  Palindrome\n");
            }
            else{
                if(strlen(s)<=7)
                printf("Case #3: %s\n",s);
                else
                printf("Case #2: %c%d%c\n",s[0],n-2,s[n-1]);
            }
       
    }

    return 0;
}