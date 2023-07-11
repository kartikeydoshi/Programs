#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,fact=1;
    float sum=0.0;

    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+1.0/fact;
    }

    printf("%f is sum\n",sum);

    return 0;
}