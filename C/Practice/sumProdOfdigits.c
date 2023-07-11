#include<stdio.h>

int main(){
    int n,sum=0,prod=1,a;
    printf("Enter value of integer\n");
    scanf("%d",&n);

    while(n!=0){
        a=n%10;
        sum=sum+a;
        prod=prod*a;
        n=n/10;
    }

    printf("Sum is %d and prod is %d\n",sum,prod);

}