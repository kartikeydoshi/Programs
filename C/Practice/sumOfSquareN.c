//display sum of square of first n natural numbers

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,sum=0;

    printf("Enter value of number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i*i;
    }

    printf("%d sum of square\n",sum);
    return 0;
}