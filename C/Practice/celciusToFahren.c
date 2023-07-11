//a program to converttemperature in Fahrenheit to Celsius and vice versa

#include<stdio.h>
#include<stdlib.h>

int main(){
    float celcius,fahren;
    int choice;

    printf("Enter initial temperature format\n1 for Celcius\n2 for Fahrenheit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:printf("Enter temperature in celcius\n");
                scanf("%f",&celcius);
                fahren=(celcius)*9/5+32; 
                printf("In Fahrenheit,the temperature is: %f",fahren);
                break;
        case 2:printf("Enter temperature in Fahrenheit\n");
                scanf("%f",&fahren);
                celcius=(fahren-32)*9/5;
                printf("In Celcius,the temperature is: %f",celcius);
                break;
        default:printf("Enter valid input\n");
                break;
    }

    return 0;    
}