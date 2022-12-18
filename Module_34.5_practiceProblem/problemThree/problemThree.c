#include<stdio.h>
int main(){
    FILE *inputFile;
    if(inputFile==NULL){
        printf("NOT found");
        return 0;
    }
    FILE *outputFile;
    inputFile=fopen("input.txt","r");
    outputFile=fopen("output.txt","w");
    int t;
    int n;
    fscanf(inputFile,"%d",&t);
    for(int i=0;i<t;i++){
        fscanf(inputFile,"%d",&n);
      
        if(n>0){
            for(int j=n; j>=-n; --j ){
                 fprintf(outputFile,"%d, ",j);
            }  
        }
        else{
          for(int j=n; j<=(n*-1); j++ ){
                 fprintf(outputFile,"%d, ",j);
            }    
        }
        fprintf(outputFile,"\n");
    }
   
    return 0;
}