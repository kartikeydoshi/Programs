#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if(n==1){
        return 1;
    }

else{
    return n*factorial(n-1);
}  
  }


int main(){
    int n;
    printf("Enter value of number\n");
    scanf("%d",&n);

    int result=factorial(n);
    printf("%d is the factorial\n",result);
    return 0;
}