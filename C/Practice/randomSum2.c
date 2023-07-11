//a program to calculate sum of series x=1/2 +3/4 + 5/6 +...n terms

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,j;
    float sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1,j=1;i<=n;i++,j=j+2){
        sum=sum+(float)(j)/(j+1);
    }
    printf("%f is the sum\n",sum);
    return 0;

}