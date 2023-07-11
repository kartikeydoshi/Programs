//a program to calculate the value of x=1! +3! + 5! +...(2*n–1)!

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,fact,i,j,sum=0;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=(2*n-1);i+=2){
        fact=1;
        for(j=1;j<=i;j++){
            fact=fact*j;
        }
        sum=sum+fact;
    }

    printf("%d is the value \n",sum);

    return 0;

}