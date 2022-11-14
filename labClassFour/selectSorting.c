#include<stdio.h>
int main(){
    int N=8,i,j;
    int ara[8]={12,7,9,3,15,2,6,5};
    int sorted_ara[N];
   
     for(i=0;i<N; i++){
        printf("%d,",ara[i]);
     }
     printf("\n");

    int min,m_ind;
    for(i=0; j<N; i++){
      min=ara[0];
      m_ind=0;
     for(i=0;i<N;i++){
        if(ara[i]<min){
            min=ara[i];
            m_ind=i;
        }
     }
     sorted_ara[j]=min;
     ara[m_ind]=999;
    }
     for(i=0;i<N; i++){
        printf("%d",ara[i]);
     }
     printf("\n");

    return 0;
}