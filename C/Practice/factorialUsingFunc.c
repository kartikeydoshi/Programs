#include<stdio.h>


int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int factorial,n;
printf("Enter number\n");
scanf("%d",&n);

factorial=fact(n);
printf("%d",factorial);
}