//linear search returning index

#include<stdio.h>

int main(){
    int i,n,array[100],search,count=0;
    printf("Enter number of values\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: \n");
        scanf("%d",&array[i]);
    }

    printf("Enter element to search\n");
    scanf("%d",&search);

    for(i=0;i<n;i++){
        if(array[i]==search){
            printf("Found at %d\n",i);
            count++;
            break;
        }
    }
    if(count==0){
        printf("not found\n");
    }




}