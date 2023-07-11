//program to accept n numbers in an array and find number of odd and even numbers

#include<stdio.h>
#define max 999

int main(){
    int even=0,n,i,array[max];

    printf("Enter number of values\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: \n");
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        if(array[i]%2==0){
            even++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",(n-even));

    
}