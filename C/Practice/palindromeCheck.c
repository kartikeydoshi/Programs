#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,rev=0,digit,i;
    printf("Enter number to check\n");
    scanf("%d",&n);
    int check=n;

    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }


(check==rev)?printf("It is a palindrome\n"):printf("its not a palindrome\n");
return 0;

}