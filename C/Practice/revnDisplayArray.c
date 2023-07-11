//reverse and display an array

#include<stdio.h>


void reverse(int array[],int n){
    int i,rev[100];
    for(i=0;i<n;i++){
        rev[n-i-1]=array[i];
    }
    printf("The reverse of the array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",rev[i]);
    }

}

int main(){
    int n,i,rev[100],array[100];

    printf("Enter number of values\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: \n");
        scanf("%d",&array[i]);
    }

    reverse(array,n);

    
}