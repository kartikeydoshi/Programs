#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter value of integer\n");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }

    printf("%d is the number of digits\n",count);



}