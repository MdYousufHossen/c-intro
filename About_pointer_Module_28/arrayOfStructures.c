#include<stdio.h>
 struct student
    {
        int roll;
        double weight;
    };
    
int main(){
   
    struct  student arr[10];
    for(int i=0;i<10;i++){
        arr[i].roll=10+i;
        arr[i].weight=10.5+i;
    }
    for(int i=0;i<10;i++){
        printf("student %d=>roll: %d, weight: %lf\n",i,arr[i].roll,arr[i].weight);
    
        
    }
  
    return 0;
}