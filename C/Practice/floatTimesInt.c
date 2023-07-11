//a program to accept one int type data and one float type data. Multiply the two numbers and display the result

#include<stdio.h>
#include<stdlib.h>

int main(){
    int data;
    float num,result;
    printf("Enter integer\n");
    scanf("%d",&data);

    printf("Enter float\n");
    scanf("%f",&num);

    result=data*num;

    printf("The product is %f",result);
    return 0;
}
