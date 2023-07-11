//s=s0+v0+0.5*a*t^2

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    double s0,v0,a;
    double s;
    int i;

    printf("Enter value of\ninitial distance\ninitial velocity\nacceleration\n");
    scanf("%lf",&s0);
    scanf("%lf",&v0);
    scanf("%lf",&a);

    printf("Distance vector for %d is %lf\n",1,s0+v0+0.5*a*pow(1,2));

    for(i=5;i<=100;i=i+5){
        printf("Distance vector for %d is %lf\n",i,s0+v0+0.5*a*pow(i,2));
    }
return 0;



}