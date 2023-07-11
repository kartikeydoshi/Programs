#include<stdio.h>
int main(){
    int n,total=0;
    again:
    printf("Enter number\n");
    scanf("%d",&n);
    
    total=total+n;
    printf("%d\n",total);
    if(total<100){
        goto again;
    }
}