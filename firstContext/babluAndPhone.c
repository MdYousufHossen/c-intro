#include<stdio.h>
int main(){
    int n, chargePercent[102];
scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d%%", &chargePercent[i]);
    }
int first=0, second=0, third=0, minSum,final,totalMin=160,result;

for(int i=0; i<n;i++){
    if(chargePercent[i]>=0&& chargePercent[i]<60){
        first=totalMin-chargePercent[i];
        result=first;
        printf("%d minutes", result);
    }
    else if( chargePercent[i]>60&&chargePercent[i]<80){
        second=chargePercent[i]-60;
         minSum=(second*2)+60;
         result=totalMin-minSum;
         printf("%d minutes", result);
    }
   else if(chargePercent[i]>79 &&chargePercent[i]<=100){
        third=chargePercent[i]-80;
         minSum=(third*3)+100;
 result=totalMin-minSum;
         printf("%d minutes", result);
    }
    printf("\n");
};
    return 0;
}