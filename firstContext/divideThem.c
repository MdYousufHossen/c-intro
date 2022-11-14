#include<stdio.h>
int main(){
 int n, roll[100], ind ;

  scanf("%d", &n);
for(int i=0; i<n; i++){
    scanf("%d", &roll[i]);
}
 scanf("%d",&ind);

 

for(int i=ind; i<n; i++){  
printf("%d",roll[i]);
 printf(" ");
}
for(int i=0; i<ind; i++){  
    printf("%d",roll[i]);
    printf(" ");   
}
    return 0;
}