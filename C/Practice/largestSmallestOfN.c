//program to find largest from N numbers

#include<stdio.h>
int main(){
    int i,n,array[100],large,small;
    printf("Enter number of N\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: \n");
        scanf("%d",&array[i]);
    }

    large=array[0];
    small=array[0];
    for(i=1;i<n;i++){
        if(large<array[i]){
            large=array[i];
        }
    }

    for(i=1;i<n;i++){
        if(small>array[i]){
            small=array[i];
        }
    }
    printf("The largest number: %d",large);
    printf("The smallest number: %d",small);

}