#include<stdio.h>
#include<string.h>
struct student{
  char name[100];
  int roll;
  int marks;
};

void main(void){
   struct student info;
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s",&info.name);

    printf("Enter roll number: ");
    scanf("%d",&info.roll);

    printf("Enter marks: ");
    scanf("%d",&info.marks);

     printf("Displaying information:\n");
   printf("Name: %s\nRoll number: %d\nMarks: %d\n",info.name,info.roll,info.marks);

  
  
    
}
