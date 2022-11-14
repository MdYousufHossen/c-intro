#include <stdio.h>
int main(){
    int number;
    
scanf("%d",&number);
for(int i=1; i<=number; i++){
    int sum;
   sum=i*i;
   printf("%d\n",sum);
};
// printf("sum===> %d",sum);

return 0;
}