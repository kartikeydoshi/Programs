//a program to check if the entered number is even or odd

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);

    if(num%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
    return 0;
}