//a program to accept two numbers and display the result of their AND, OR, EXOR and NOT operations


#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    int and,or,exor,not;
    printf("Enter first number\n");
    scanf("%d",&a);

    printf("Enter second number\n");
    scanf("%d",&b);

    and=a&b;
    or=a|b;
    exor=a^b;

    printf("AND: %d\nOR: %d\nEXOR: %d\nNOT of first %d and second %d\n",and,or,exor,~a,~b);
    return 0;

}