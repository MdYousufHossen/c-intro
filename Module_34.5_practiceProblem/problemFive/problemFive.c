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
    for (int i = n; i > 0; i--)
    {
     for(int j=0; j<i; j++){
             fprintf(outputFile," ");
        }
      fprintf(outputFile,"#####\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}