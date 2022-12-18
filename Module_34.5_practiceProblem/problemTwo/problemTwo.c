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
    int n;
    fscanf(inputFile,"%d",&n);
    for(int i=1; i<=n; i++){
     fprintf(outputFile,"%d ",i);
    }
   
    return 0;
}