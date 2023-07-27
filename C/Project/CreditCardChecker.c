//a program to create a cc number checker acc to the following specififcations
/*
American Express numbers start with 34 or 37; (length=15)
most MasterCard numbers start with 51, 52, 53, 54, or 55 (they also have some other potential starting numbers) (length=16)
all Visa numbers start with 4, validate cc using Luhn's algorithm (length=13/16)
*/

#include<stdio.h>


int len_check(long n);
int startNum(long n,int l);
int luhn(long n,int l);

int main(void)
{
    long cc;
    int length;
    int checksum,eCheck;
    

    printf("Enter your cc number\n");
    scanf("%ld",&cc);

    length=len_check(cc);

    eCheck=startNum(cc,length);

    checksum=luhn(cc,length);

    switch(checksum+eCheck)
    {
        case 5:printf("VISA\n");
                break;
        case 6:printf("AMEX\n");
                break;
        case 7:printf("MASTERCARD\n");
                break;
        case 8:printf("Invalid\n");
                break;
    }


    return 0;

}

int startNum(long n,int l)
{

    
    while(n>100)
    {
        n/=10;
    }

    if(n/10==4 && (l==13 || l==16))
    {
        return 4;
    }
    else if((n==34 || n==37) && l==15)
    {
        return 5;
    }
    else if((n>=51 || n<=55) && l==16)
    {
        return 6;
    }
    else{
        return 7;
    }


}




int len_check(long n)
{
    int l=0;
    while(n!=0)
    {
        l++;
        n/=10;
    }

    return l;

}

int luhn(long n,int l)
{
    int sum=0,sum1=0;
    int array[l];

    for(int i=l-1;l>=0;l--)
    {
        array[i]=n%10;
        n/=10;
    }

    for(int j=l-2;j>=0;j=j-2)
    {
        array[j]=array[j]*2;
        if(array[j]>=10)
        {
            while(array[j]!=0)
            {
                sum1+=array[j]%10;
                array[j]/=10;
            }
        }
        else
        {
         sum+=array[j];
        }
    }

    for(int k=l-1;k>=0;k=k-2)
    {

        sum+=array[k];

    }

    sum=sum+sum1;

    if(sum%10==0)
    {
        return 1;
    }

    else
    {
        return 0;
    }



}



