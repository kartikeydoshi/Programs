#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    float sum=0.0;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        sum=sum+1.0/i;
    }

    printf("%f\n",sum);

    return 0;



}