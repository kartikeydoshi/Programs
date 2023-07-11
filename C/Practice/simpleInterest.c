//a program to calculate the simple interest taking principal, rate of interest and number of years as inputs from user.

#include<stdio.h>
#include<stdlib.h>
int main(){
    
    float simpleInterest,time,roi,principal;

    printf("Enter the value of principal\n");
    scanf("%f",&principal);

    printf("Enter the Rate of Interest\n");
    scanf("%f",&roi);

    printf("Enter the number of years\n");
    scanf("%f",&time);
    
    simpleInterest=(principal*roi*time)/100;

    printf("Simple interest: %f",simpleInterest);
    return 0;
}