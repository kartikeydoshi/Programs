#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    const int MAX=100,MIN=1;
    int guess,answer,guesses=0;

    srand(time(0)); //creates a seed for the number generating function

    answer=(rand()%MAX)+MIN; //random number stays between 1 and 100

    do{
        printf("----------\n");
        printf("Enter your guess\n");
        scanf("%d",&guess);
        if(guess>answer){
            printf("Too high\n");
        }
        else if(answer>guess){
            printf("Too low\n");
        }
        else{
            printf("Your answer is correct\n");
        }
        guesses++;

    }while(guess!=answer);
    printf("Guesses= %d",guesses);
    return 0;



}