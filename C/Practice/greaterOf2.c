//accept two numbers from user and display the greatest of two using the conditional operator.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1,num2;
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter second number\n");
    scanf("%d",&num2);

   // (num1>num2)?printf("%d is greater",num1):printf("%d is greater",num2);
   int greater=(num1>num2)?num1:num2;
   printf("%d is greater\n",greater);

    return 0;
}