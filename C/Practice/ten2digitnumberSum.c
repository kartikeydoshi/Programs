//a program to accept 10, 2- digit numbers from user and add them. If the user enters a three digit number stop accepting the numbers and display the sum

#include<stdio.h>

int main(){
    int n,total=0,i;
    for(i=1;i<=10;i++){
        printf("Enter number\n");
        scanf("%d",&n);
        if(n>99 || n<10)
        break;
        total+=n;
    }
    printf("Total: %d\n",total);

}