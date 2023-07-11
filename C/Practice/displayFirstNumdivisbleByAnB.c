//a program to display first x numbers divisible by (user defined) A and B number both
#include<stdio.h>


int main(){
    int x,a,b,i=0,n=1;
    printf("Enter value of both divisors\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("number of such values to be shown\n");
    scanf("%d",&x);

    while(i<x){
        if(n%a==0 && n%b==0){
            printf("%d\n",n);
            i++;
            n++;
        }else{
            n++;
        }

        
    }
    return 0;



}