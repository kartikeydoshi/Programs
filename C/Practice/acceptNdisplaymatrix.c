//program to accept a matrix and display it

#include<stdio.h>

int main(){
    int m,n,i,j,a[10][10];

    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter value\n");
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


}