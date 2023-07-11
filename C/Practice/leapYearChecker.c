#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Enter value of year\n");
    scanf("%d",&n);

    if(n%4==0 && n%100!=0 || n%100==0 && n%400==0){
        printf("its a leap\n");
    }else{
        printf("not leap\n");
    }


}