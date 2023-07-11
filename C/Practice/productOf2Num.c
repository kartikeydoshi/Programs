//C program to accept two numbers and display its product.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int firstNum,secondNum,answer;

    printf("Enter the first number\n");
    scanf("%d",&firstNum);

    printf("Enter the second number\n");
    scanf("%d",&secondNum);
    answer=firstNum*secondNum;

    printf("The product of the two numbers is: %d\n",answer);
}