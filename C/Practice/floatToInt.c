//accept a float number and display the integer part using type casting operator.
#include<stdio.h>
#include<stdlib.h>

int main(){
    float number;
    int convert;

    printf("Enter float value\n");
    scanf("%f",&number);

    convert=(int)number;
    printf("Float value: %f\nInteger value: %d",number,convert);
    return 0;
}