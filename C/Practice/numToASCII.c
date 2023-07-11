//a program to accept a number and display its equivalent ASCII using type casting.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    char result;

    printf("Enter the value of number\n");
    scanf("%d",&num);

    result=(char)num;

    printf("The ASCII value of %d is %c\n",num,result);
    return 0;

}