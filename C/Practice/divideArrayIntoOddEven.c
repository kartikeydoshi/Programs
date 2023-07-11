//program to accept aaray of numbers and then make new arrays with odd numbers and even numbers

#include<stdio.h>

int main(){
    int a[100],n,i,j=0,z=0,d[100],c[100];

    printf("Enter number of elements\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            c[j]=a[i];
            j++;
        }else{
            d[z]=a[i];
            z++;
        }
    }

    printf("Odd array\n");
    for(i=0;i<z;i++){
        printf("%d\n",d[i]);
    }

    printf("Even array\n");
    for(i=0;i<j;i++){
        printf("%d\n",c[i]);
    }



}