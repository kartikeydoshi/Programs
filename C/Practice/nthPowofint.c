#include<stdio.h>
#include<math.h>


int main(){
    int n,p,i;
    printf("enter value of integer and n value\n");
    scanf("%d",&n);
    scanf("%d",&p);

    for(i=1;i<=p;i++){
        printf("The %d power of %d is %f",i,n,pow(n,i));
    }

return 0;
    
}