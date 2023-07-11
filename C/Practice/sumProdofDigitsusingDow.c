//using do while

#include<stdio.h>

int main(){
    int n,a,prod=1,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);

    do{
        a=n%10;
        sum=sum+a;
        prod=prod*a;
        n=n/10;
    }while(n!=0);

    printf("%d is sum\n%d is prod\n",sum,prod);
    return 0;

}