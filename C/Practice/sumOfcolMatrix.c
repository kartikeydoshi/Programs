// C program to find the sum of column elements of a 2 dimensional M × N array A.

#include<stdio.h>

int main(){
    int m,n,i,j,a[10][10],b[5];

     printf("Enter rows and columns\n");
     scanf("%d %d",&m,&n);

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element: \n");
            scanf("%d",&a[i][j]);
        }
     }

     for(i=0;i<n;i++){
        b[i]=0;
        for(j=0;j<m;j++){
            b[i]=b[i]+a[j][i];
        }
     }

     printf("The original matrix is\n");
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
     }

printf("The sum of columns are\n");
for(i=0;i<n;i++){
    printf("%d\t",b[i]);
}



}