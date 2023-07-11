//a program to separate the digits of a three digit number and display the three digits separately.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int number,a,b,c;
    printf("Enter a three digit number\n");
    scanf("%d",&number);

        a=number%10;
        b=(number/10)%10;
        c=(number/100);

        printf("The digits in units,tens,hundredths are\n%d\t%d\t%d\n",a,b,c);
        return 0;


}