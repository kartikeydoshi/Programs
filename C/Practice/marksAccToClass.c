#include<stdio.h>
int main(){
    int n;
    printf("Enter value of marks (0-100)\n");
    scanf("%d",&n);


    if(n==100){
        printf("Distinction\n");
    }else{
        n=n/10;
        switch(n){
            case 0:
            case 1:
            case 2:
            case 3:printf("Fail\n");
                    break;
            case 4:printf("Pass Class\n");
                    break;
            case 5:printf("Second Class\n");
                    break;
            case 6:printf("First Class\n");
                    break;
            case 7:
            case 8:
            case 9:printf("Distinction\n");
                   break;
            default:printf("invalid marks\n");
        }
    }

   /* if(n>=70){
        printf("Distinction\n");
    }
    else if(n>=60){
        printf("First Class\n");
    }
    else if(n>=50){
        printf("Second Class\n");
    }
    else if(n>=40){
        printf("Pass Class\n");
    } 
    else{
        printf("Fail\n");
    }
    return 0;
    */
    
}