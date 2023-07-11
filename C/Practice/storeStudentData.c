//a program to store and display the name, roll number and
//fees of a student using structure

#include<stdio.h>

struct student{
    char name[20];
    int rollNum;
    float fees;
};

int main(){
    struct student a;
    printf("Enter sudents name,roll number and fees\n");

    fgets(a.name,sizeof(a.name),stdin);
    

    scanf("%d %f",&a.rollNum,&a.fees);

    printf("The student details are\n");
    printf("Name: %s\n",a.name);
    printf("Roll Number: %d\n",a.rollNum);
    printf("Fees: %f\n",a.fees);

    return 0;



}