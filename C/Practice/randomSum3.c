//a program to calculate summation of series 1/2 – 3/4 + 5/6 – 7/8 + ........ upto n terms.

#include<stdio.h>


int main(){
    float sum=0;
    int sign=1,n,i,denominator=2;

    printf("Enter value of Number\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        sum=sum+sign*(float)(2*i+1)/denominator;
        denominator+=2;
        sign=-sign;
    }
    printf("%f is the sum\n",sum);

return 0;
}