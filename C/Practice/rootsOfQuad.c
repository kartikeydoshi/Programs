//program to calculate roots of quadratic eqaution

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float root1,root2,mod;
    float a,b,c;

    printf("Enter coeffcient of x^2\n");
    scanf("%f",&a);

    printf("Enter coeffcient of x\n");
    scanf("%f",&b);

    printf("Enter constant\n");
    scanf("%f",&c);

    mod=b*b-4*a*c;

    root1=(-b+sqrt(mod))/(2*a);
    root2=(-b-sqrt(mod))/(2*a);

    //root1=(-b+pow((b*b-4*a*c),0.5))/(2*a);
    

    printf("The roots of the equation are %f %f",root1,root2);
    return 0;

}