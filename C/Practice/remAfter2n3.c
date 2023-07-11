//a program to accept a number from user and find the remainder after dividing it by 2 and 3.

#include<stdio.h>
#include<stdlib.h>


int main(){
    int num,num1,num2;
    printf("Enter number\n");
    scanf("%d",&num);
    num1=num%2;
    num2=num%3;
    printf("The remainder after dividing by 2 is %d and by 3 is %d\n",num1,num2);
    return 0;

}