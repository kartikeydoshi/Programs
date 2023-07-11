//a program to display the multiplication table of a user entered number. The table must be upto 10.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter the value of number\n");
    scanf("%d",&n);

    printf("***Multiplication Table***\n");

    for(i=1;i<=10;i++){
        printf("%d*%d = %d\n",n,i,(i*n));
    }
    return 0;
}

