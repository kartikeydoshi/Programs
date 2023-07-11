//a program to accept a two digit number and display it in reversed form.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,u,t,rev;
    printf("Enter number\n");
    scanf("%d",&num);

    u=num%10;
    t=num/10;

    rev=u*10+t;
    printf("The number is: %d\nreverse is %d\n",num,rev);
    return 0;
}