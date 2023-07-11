// program to evaluate the value of the following series and display the result
// (summation 1 to n)Xi^2-(summation 1 to n)(Xi)^2. Xi are elements from array

#include<stdio.h>
#include<math.h>

int main(){

    int i,n,array[100],sum1=0,sum2=0,sum;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number: \n");
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        sum1=sum1+pow(array[i],2);
        sum2=sum2+array[i];
    }

    sum=sum1-sum2*sum2;

    printf("%d",sum);


}


  