// previous file:- callback.cpp
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//The game is to guess the card the queen is placed at from 3 cards on the table.
//You have to bet from the virtual money you have. If you win, you get 3*bet
//else you lose the amount you bet.
//computer shuffles and you do the above again or quit.
int cash = 100;

void Play(int bet){
    char* C = (char*)malloc(3*sizeof(char));
    *C = 'J'; *(C+1) = 'Q'; *(C+2) = 'K'; //initial config of cards
    printf("Shuffling.....");
    srand(time(NULL));
    for (int  i = 0; i < 5; i++)
    {
        int x = rand()%3; //run rand 5 times and choose to random positions
        int y = rand()%3; // mod 3 to keep them b/w 0,1&2.
        char temp = C[x]; C[x]=C[y]; C[y]=temp; // swaps char x and y
    }
    int playerGuess;
    printf("What's the position of Queen:- 1,2 or 3? ");
    scanf("%d",&playerGuess);
    if(C[playerGuess-1]=='Q'){
        cash += 3*bet;
        printf("You win! Result = \"%c %c %c\" Total Cash= %d",C[0],C[1],C[2],cash);
    }
    else{
        cash-=bet;
        printf("You lose! Result = \"%c %c %c\" Total Cash= %d",C[0],C[1],C[2],cash);
    }

    //The main point of this topic is here!!
    //if free function were not present, as you keep playing, you will keep exhausting memory which you won't use!!
    free(C);
}



int main(void){
    int bet;
    printf("Welcome to KK's Casino!\n");
    printf("Here's your initial cash:- $%d\n", cash);
    while(cash > 0){
        printf("What's your bet? $");
        scanf("%d",&bet);
        if(bet == 0 || bet > cash){
            printf("Thanks for visiting our Casino, have a nice Day and come back again :)\n"); 
            break;
        Play(bet);
        printf("\n*****************************************************\n");
    }
}
