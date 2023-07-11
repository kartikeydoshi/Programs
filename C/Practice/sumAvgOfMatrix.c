//program to calculate sum and average of m x n matrix

#include<stdio.h>

int main(){
    int i,j,m,n,a[10][10];
    float avg,sum=0;
    
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter value: \n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=sum+a[i][j];
        }
    }
    avg=sum/(m*n);
    printf("The sum is: %f\navg is: %f\n",sum,avg);



 }

 /* trace of matrix

 for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(i==j){
            sum+=a[i][j];
        }
    }
 }


 */