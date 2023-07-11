#include<stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    printf("Enter number of rows and colummns\n");
    scanf("%d %d",&m,&n);
printf("Enter values of matrix 1\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element: \n");
            scanf("%d",&a[i][j]);
        }
    }


    printf("Enter values of matrix 2\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element: \n");
            scanf("%d",&b[i][j]);
        }
    }

    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

printf("The sum of the matrix is\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }




}