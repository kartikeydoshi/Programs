//C program to accept a number and display its square

#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);

    printf("The square of the number %d is %d\n",number,(number*number));
}