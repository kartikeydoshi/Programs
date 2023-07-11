//program to find GCD and LCM

#include<stdio.h>

int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int a, b,temp;

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }


    int gcd = calculateGCD(a, b);
    int lcm = calculateLCM(a, b);

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
