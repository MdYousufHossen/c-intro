#include<stdio.h>
#include<string.h>
int main(){
   
    int n;
    char str[] = {'P', 'h', 'i', 't', 'r', 'o','n'};
    printf("%s", str);
   scanf("%d",&n);
    char sen[102];
    for(int i=0; i<=n;i++){
         fgets(sen,sizeof(sen),stdin);
          int len =strlen(sen)-1;
            if(len>10){
                printf("%c%d%c",sen[0],len-2,sen[len-1]);
                }else{
                puts(sen);
                }
                printf("\n");
    } 
    return 0;
}