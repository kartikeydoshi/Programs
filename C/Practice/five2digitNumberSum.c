//a program to accept 5, 2- digit numbers from user and add them. If the user enters a three digit number, this number should be discarded and again accepted. Also an indication must be given to the user that he has entered a number greater than 99 and hence it is not accepted. The sum must be displayed at the end.

#include<stdio.h>

int main(){
    int n,total=0,i;

    
    for(i=1;i<=5;i++){
        printf("Enter number\n");
    scanf("%d",&n);

    if(n>99 || n<10){
        printf("Number doesnt have 2 digits\n");
        i--;
        continue;
    }
    total+=n;
    }

    printf("Total: %d\n",total);

}