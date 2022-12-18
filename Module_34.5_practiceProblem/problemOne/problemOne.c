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
    int value;
    fscanf(inputFile,"%d",&value);
    fprintf(outputFile,"%d",value);
    return 0;
}