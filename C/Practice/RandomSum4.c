//a Program to calculate summation of series 1 – x2/2! + x4/3! – x6/5! + x8/6!.. upto n terms
#include<stdio.h>
#include<math.h>

int main(){
    int sign=-1,i,n,x,fact,j,k=2;
    float sum=1.0;

    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter value of x\n");
    scanf("%d",&x);

if(n==1){
    printf("Value of series is \n1");
}
else{
 for(i=2;i<=n;i++){
        fact=1;
        for(j=1;j<=i;j++){
            fact=fact*j;
        }
        sum=sum+sign*(float)pow(x,k)/fact;
        sign=-sign;
        k+=2;
        printf("%f",sum);
    }
    printf("The value of series is\n%f",sum);
    return 0;
    
}



}