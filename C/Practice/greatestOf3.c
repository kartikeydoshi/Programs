//a program to accept three numbers from user and display the greatest of three using the conditional operator. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;

    printf("Enter first number\n");
    scanf("%d",&a);

    printf("Enter second number\n");
    scanf("%d",&b);

    printf("Enter third number\n");
    scanf("%d",&c);

    int greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Greatest is: %d",greatest);
    return 0;


}