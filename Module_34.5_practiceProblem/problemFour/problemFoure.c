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
    int num;
    int sum=0;
    fscanf(inputFile,"%d",&n);
    for(int i=0; i<n; i++){
        fscanf(inputFile,"%d",&num);
        sum+=num%10;
    }
    fprintf(outputFile,"sum= %d",sum);

    // file close........
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}