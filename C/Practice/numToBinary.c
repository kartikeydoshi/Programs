#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=15;i>=0;i--){
        printf("%d",n/(int)pow(2,i));
        n=n%(int)(pow(2,i));
    }

return 0;
}