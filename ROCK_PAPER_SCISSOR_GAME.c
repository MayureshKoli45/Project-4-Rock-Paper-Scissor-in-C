#include<stdio.h>
#include<stdlib.h>         // These are the libraries we are going to use
#include<time.h>

int RockPaperScissor(char a,char b){
    
    // Condition for draw :- RR , PP, SS
    if (a == b)
    {
        return 0;
    }
//////////////////////////////////////////////////////////////////////

    // Condition for non-draw cases:- RP, PR, RS, SR,PS, SP.
    if (a == 'r' && b == 'p')
    {
        return -1;
    }
    else if (a == 'p' && b == 'r')
    {
        return 1;
    }
/////////////////////////////////////////////////////////////////////
    if (a == 'r' && b == 's')
    {
        return 1;
    }
    else if (a == 's' && b == 'r')
    {
        return -1;
    }
/////////////////////////////////////////////////////////////////////     
    if (a == 'p' && b == 's')
    {
        return -1;
    }
    else if (a == 's' && b == 'p')
    {
        return 1;
    }
}


int main(){
    char you, comp;
    int result, number;

    // creating a random number
    srand(time(0));
    number = rand()%3+1;

    // setting conditions for computer based on random number obtained
    if (number == 1)
    {
        comp = 'r';
    }
    else if (number == 2)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
///////////////////////////////////////////////////////////////////////    
    
    // Input for user
    printf("Enter r for rock, p for paper, s for scissor:-\n");
    scanf("%c",&you);  

///////////////////////////////////////////////////////////////////////

    result = RockPaperScissor(you,comp);

    if (result == 0)
    {
        printf("The game is DRAW!\n");
    }
    
    else if (result == 1)
    {
        printf("You WIN!\n");
    }
    
    else
    {
        printf("You LOOSE!\n");
    }
    
    printf("You choose %c and Computer choose %c.\n",you,comp);    

    return 0;
}