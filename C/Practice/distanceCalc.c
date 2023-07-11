//a program to accept the distance between two cities in kilometers from the keyboard. calculate and display this distance in meters, feet,centimeters and inches.
#include<stdio.h>
#include<stdlib.h>

int main(){
    float distance,meter,feet,centi,inch;
    printf("Enter distance in km\n");
    scanf("%f",&distance);

    meter=distance*1000;
    feet=distance*3280.84;
    centi=meter*100;
    inch=distance*39370.1;

    printf("***Conversion Table***\n");
    printf("Kilometer\t%f\nMeter\t%f\nFeet\t%f\nCentimeter\t%f\nInches\t%f\n",distance,meter,feet,centi,inch);
    return 0;

    }