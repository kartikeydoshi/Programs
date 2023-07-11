#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n,sum=0,digit;

    printf("Enter value of number\n");
    scanf("%d",&n);
    int actualDigit=n;

    while(n!=0){
        digit=n%10;
        sum=sum+pow(digit,3);
        n=n/10;
    }
    if(sum==actualDigit){
        printf("Armstrong\n");
    }else{
        printf("Not armstrong\n");
    }
}