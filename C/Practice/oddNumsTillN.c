//odd numbers till n

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter value of num\n");
    scanf("%d",&n);

    for(i=1;i<n;i+=2){
        printf("%d\n",i);
    }

    return 0;



}