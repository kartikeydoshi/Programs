//a program to display the first n natural numbers, where the value of n is taken from user.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter value of first n (of natural numbers)\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("%d\n",i+1);
    }
    return 0;
}