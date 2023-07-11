// program to calculate compound interest and amount.
//Program Using formula A=P(1+R/100)^n, where P=Principal Amt., R is Rate of interest , n= number of years. 
//Your program should make use of user defined function to calculate power. Program should accept P, R and N

#include<stdio.h>
#include<math.h>

void ci(float p,float r,float n){
    float amount,raised;

    raised=pow(1+r/100,n);
    amount=p*raised;
    printf("%f is the amount\n",amount);
}

int main(){
float p,r,n;

printf("Principal amount\n");
scanf("%f",&p);

printf("Rate of interest\n");
scanf("%f",&r);

printf("Number of years \n");
scanf("%f",&n);

ci(p,r,n);


}