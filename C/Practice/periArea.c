//Write a program to accept the length and breadth of a rectangle or a square from the user. Calculate and display the area and perimeter.

#include<stdio.h>
#include<stdlib.h>

void rectangle(float l,float b){
    float p,a;
    p=2*(l+b);
    a=l*b;
    printf("Perimeter is %f\nArea is %f",p,a);
}

void square(float t){
    float p,a;
    p=4*t;
    a=t*t;
    printf("Perimeter is %f\nArea is %f",p,a);
}




int main(){
    float length,breadth,area,perimeter;
    int n;

    printf("Enter 1 for rectangle and 2 for square\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("Enter length\n");
                scanf("%f",&length);
                printf("Enter breadth\n");
                scanf("%f",&breadth);
                rectangle(length,breadth);
                break;
        case 2:printf("Enter side of square\n");
                scanf("%f",&length);
                square(length);
                break;
    }
    return 0;

}