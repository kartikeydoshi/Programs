//Write a program to accept n numbers and find their average.

#include<stdio.h>
#include<stdlib.h>

int max=999;


int main(){
    int array[max];
    int n,i;
    int sum=0;
    float avg;

    printf("Enter amount of values\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number\n");
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    avg=sum/n;

    printf("The average is %f ",avg);
    return 0;
}