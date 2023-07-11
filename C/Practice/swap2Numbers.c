//a program to swap two integers

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;

    printf("Enter first number\n");
    scanf("%d",&a);

    printf("Enter second number\n");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

printf("The numbers have been swapped\n a=%d b=%d\n",a,b);
return 0;

}