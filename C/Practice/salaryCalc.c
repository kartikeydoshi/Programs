// program to accept basic salary from the keyboard. Calculate the gross salary that includes basic salary, 50% DA and 40% HRA.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float baseSal,DA,HRA,gross;

    printf("Enter the base salary\n");
    scanf("%f",&baseSal);

    DA=(50*baseSal)/100;
    HRA=(40*baseSal)/100;

    gross=baseSal+DA+HRA;

    printf("The gross salary is: %f",gross);
}