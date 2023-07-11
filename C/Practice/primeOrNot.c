//user entered number prime or not
#include<stdio.h>

int main(){
    int n,i,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("The number is prime\n");
    }else{
        printf("not prime\n");
    }
}