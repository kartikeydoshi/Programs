//program to display fibonacci series till input of n

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,c;
    int x1=0,x2=1;
    printf("Enter value of n\n");
    scanf("%d",&n);

    if(n==0){
        printf("%d\n",x1);
    }

    else if(n==1){
        printf("%d\n",x1);
    }

    else if(n==2){
        printf("%d\n%d\n",x1,x2);
    }

    else{
        printf("0\n1\n");
        for(i=2;i<n;i++){
            c=x1+x2;
            x1=x2;
            x2=c;
            printf("%d\n",c);
        }

    }




    
}

