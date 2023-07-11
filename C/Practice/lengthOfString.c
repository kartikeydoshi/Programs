#include<stdio.h>
#include<string.h>


int main(){
    char a[100];
    printf("Enter a string\n");
    fgets(a,sizeof(a),stdin);
   printf("%s",a);
    int l=strlen(a);
    printf("The length of entered string is: %d\n",l-1); 
//fgets include newline character



/*
int len=0;

while(a[len]!='\n'){
    len++;
}
printf("%d",len);
}

*/