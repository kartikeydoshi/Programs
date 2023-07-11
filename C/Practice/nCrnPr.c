#include<stdio.h>

int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(){
    int n,r;

    printf("Enter value of n and r \n");
    scanf("%d",&n);
    scanf("%d",&r);

    float ncr;
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("nCr: %f\n",ncr);
    return 0;

}

/*for nPr
ncp=fact(n)/fact(n-r);
*/