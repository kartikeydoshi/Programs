//a program to shift anumber three bits left and right and display the result

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;
    printf("Enter the number\n");
    scanf("%d",&a);

    b=a<<3; //left move
    c=a>>3;  //right move

    printf("Right move %d\nLeft Move %d",b,c);
    return 0;


}