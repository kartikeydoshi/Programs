//a program to display first n odd numbers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter value of \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("%d\n",i*2+1);
    }

return 0;

}