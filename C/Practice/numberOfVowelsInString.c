#include<stdio.h>
#include<string.h>


int main(){
    char a[100];
    int len=0,i,count=0;

    printf("Enter a string\n");
    fgets(a,sizeof(a),stdin);
    

    while(a[len]!='\n'){
        len++;
    }

    for(i=0;i<len;i++){
        if(a[i]=='a' ||a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            count++;
        }
    }

    printf("The number of vowels are: %d\n",count);

    /*
    for(i=0;i<len;i++){
    switch (a [i] ) {
case ‘a’; len ++; break;
case ‘e’ = len ++; break;
case ‘i’ = len ++; break;
case ‘o’ = len ++; break;
case ‘u’ = len ++; break;
case ‘A’ = len ++; break;
case ‘E’ = len ++; break;
case ‘I’ = len ++; break;
case ‘O’ = len ++; break;
case ‘u’ = len ++; break;
} }
    */


}