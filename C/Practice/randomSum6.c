//program to evaluate the value of Standard deviation and display
//the result sd=sqrt[(summation i=1 to n)(xi-x)^2/n]

#include<stdio.h>
#include<math.h>

int main(){
    int n,i,array[100],sum=0;
    float avg,sd,squared,tsum=0.0;
    printf("Enter number of values\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: \n");
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+array[i];
    }

    avg=sum/n;

    for(i=0;i<n;i++){
        squared=pow(array[i]-avg,2);
        tsum=tsum+squared;
    }

    sd=sqrt(tsum/n);
    printf("%f is the standard deviation\n",sd);



}

