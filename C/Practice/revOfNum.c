#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,rev=0,digit;

    printf("Enter the number\n");
    scanf("%d",&n);

   while(n!=0){
    digit=n%10;

    rev=rev*10+digit;
    n=n/10;
   }

   printf("The reverse number is %d\n",rev);


}