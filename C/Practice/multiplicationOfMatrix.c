#include<stdio.h>

int main() {
    int a[10][10], b[10][10],c[10][10];
    int i, j, m, n,p,k;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
printf("the rows of matrix 2 is %d\n",n);
    printf("Enter the value of columms for second matrix\n");
    scanf("%d",&p);

     for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }   
        }

        for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

printf("The resultant matrix is: \n");


for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
