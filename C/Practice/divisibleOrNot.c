//a program to check if the user entered number is divisible by another or not.
#include<stdio.h>


int main(){
    int num,div;
    printf("Enter dividend\n");
    scanf("%d",&num);
    printf("Enter divisor\n");
    scanf("%d",&div);

    if(num%div==0){
        printf("%d is divisible by %d\n",num,div);
    }
    else{
        printf("not divisible\n");
    }

}