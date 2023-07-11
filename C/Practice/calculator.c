#include<stdio.h>

int main(){
   // int choice;
    int a,b;

    printf("Enter value of numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

   /* printf("Enter Choice\n1.Add\n2.Subtract\n3.Division\n4.Multiply\n5.Modulus\n6.Exit\n");

    do{
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("%d",a+b);
                    break;
            case 2:printf("%d",a-b);
                    break;
            case 3:printf("Qoutient: %d\n",a/b);
                    printf("Remainder: %d\n",a%b);
                    break;
            case 4:printf("%d",a*b);
                    break;
            case 5:printf("%d",a%b);
                    break;
        }

    }while(choice!=6); */


char choice;
    printf("Enter Choice\n+ Add\n- Subtract\n / Division\n* Multiply\n %% Modulus\n6.Exit\n");

    do{
        scanf("%c",&choice);
        switch(choice){
            case '+':printf("%d",a+b);
                    break;
            case '-':printf("%d",a-b);
                    break;
            case '/':printf("Qoutient: %d\n",a/b);
                    printf("Remainder: %d\n",a%b);
                    break;
            case '*':printf("%d",a*b);
                    break;
            case '%':printf("%d",a%b);
                    break;
        }

    }while(choice!=6);

    return 0;
}