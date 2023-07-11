#include<stdio.h>

int main(){
    int m,n,i,j,a[10][10],b[10][10],flag=0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element: \n");
            scanf("%d",&a[i][j]);
        }   
}

//making tranpose of matrix

for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }   
}

for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=b[i][j])
            flag++;
        }   
}
(flag==0)?printf("Symmetric\n"):printf("Not symmetric\n");

return 0;











}