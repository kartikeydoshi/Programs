#include<stdio.h>

int main(){
    int n,i,x=1;
    printf("Enter value of n\n");
    scanf("%d",&n);

    printf("The following are N prime numbers\n");
    while(n!=0){
        x++;
        i=2;
        while(x%i!=0){
            i++;
        }
        if(x==i){
            printf("%d\n",x);
            n--;
            }
            


    }
}