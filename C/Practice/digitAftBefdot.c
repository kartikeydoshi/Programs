#include<stdio.h>

int main(){
    float n;
    int aCount=0,bCount=0,x;

    printf("Enter value of number\n");
    scanf("%f",&n);

    x=(int)n;
    n=n-x;

    while(x!=0){
        x=x/10;
        bCount++;
    }

    while(n!=0){
        n=n*10;
        x=(int)n;
        n=n-x;
        aCount++;
    }

    printf("%d before \n%d after\n",bCount,aCount);





}