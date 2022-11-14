#include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//    if(n>=0){
//     for(int i=1; i<=n;i++){
//         printf("%d ",i);
//     }
//    }else{
//      for(int i=0; i>=n;i--){
//         printf("%d ",i);
//     }
//    }
//     return 0;
// }

int main(){
  int arr[5]= {213,10,325,507,100};
    int max=arr[0],i;
    for(i=1; i<5; i+=1)
    {
        if(arr[i]__max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}