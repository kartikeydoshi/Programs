#include<stdio.h>


void bubblesort(int array[],int n){
    int i,j,temp;
    for(i=0;i<=n-2;i++){
        for(j=0;j<=n-2;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    printf("After Sorting\n");
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
}

int main(){
    int n,i,array[100];
    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number: \n");
        scanf("%d",&array[i]);
    }
    

    bubblesort(array,n);

}

