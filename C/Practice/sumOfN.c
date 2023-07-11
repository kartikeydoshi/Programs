//program to calculate and display the sum of first n natural numbers

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    //sum=(n*(n+1))/2;
    printf("%d is the sum\n",sum);
    return 0;
}