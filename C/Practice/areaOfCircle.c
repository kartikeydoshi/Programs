//program for area of circle

#include<stdio.h>
#include<stdlib.h>
float pi=22.0/7.0;

int main(){
float radius,area;

printf("Enter radius\n");
scanf("%f",&radius);
area=pi*radius*radius;

printf("Area is %f\n",area);
return 0;
}
