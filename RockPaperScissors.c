/**
 * @file RockPaperScissors.c
 * @author Suara Ayomide(aysuarex@gmail.com)
 *  
 * main - A program that runs a game of rock-paper-scissors
 * checkWin - Checks the winner of the game
 * computer - plays for the computer, generating a random result
 * 
 * @date 2022-06-11
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int computer();
int checkWin(); 
int checkwin; //Variable storing the return value for checkWin() function
int comp; // Variable that stores the return value of function computer()
char choice[8];
char name[11];
int decision; //The player's input: rock, paper or scissors
int random; //Variable that stores the last two digits of a randomly generated number
int playerscore = 0;
int computerscore = 0;

int main()
{
    srand(time(NULL));
    system("cls");
    system("color 0e");

    printf("=======================================\n");
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Input your Name (Max 10 Characters): ");
    scanf("%s", &name);
    
    Sleep(500);
    START:

    printf("\nMake a choice: Rock, Paper or Scissors: \n");
    printf("Type X or exit to quit the game\n\t\t\t==> ");
    scanf("%s", &choice);

    if (strcmp(choice, "rock") == 0 || strcmp(choice, "Rock") == 0 || strcmp(choice, "R") == 0 || strcmp(choice, "r") == 0)
        {
            decision = 1;
            printf("You chose Rock\n");
        }
    else if (strcmp(choice, "paper") == 0 || strcmp(choice, "Paper") == 0 ||  strcmp(choice, "P") == 0 || strcmp(choice, "p") == 0)
        {
            decision = 2;
            printf("You chose Paper\n");
        }
    else if (strcmp(choice, "scissors") == 0 || strcmp(choice, "Scissors") == 0 || strcmp(choice, "S") == 0 || strcmp(choice, "s") == 0)
        {
            decision = 3;
            printf("You chose Scissors\n");
        }
    else if (strcmp(choice, "X") == 0 || strcmp(choice, "x") == 0 || strcmp(choice, "exit") == 0)
    {
        exit(0);
    }
    else 
    {
        Sleep(500);
        printf("\n------------------------------------\n");
        printf("INVALID CHOICE!\n");
        Sleep(500);
        printf("Type rock, paper, or scissors to make a choice\n");
        Sleep(1000);
        printf("You can also simply type R, P or S\n\n");
        goto START;
    }
    Sleep(500);

    checkwin= checkWin();
    //To increase the scores
    if (checkwin == 0) //If player loses
    {
        computerscore++;
    }
    else if (checkwin == 1) //If player wins
    {
        playerscore++;
    }
    
    printf("--------------------------------\n"); 
    printf("Scoresheet\n");
    printf("%s = %d\n", name, playerscore);
    printf("Computer = %d\n", computerscore);
    printf("--------------------------------\n\n");

    Sleep(1000);
    goto START;

    return 0;
}

/*Note:
Rock = 1
Paper = 2
Scissors = 3
*/

int computer()
{
    random = rand() % 100;
    if (random < 33)
    {
        
        printf("     ______\n");
        printf("---'   ____)\n");
        printf("      (_____)\n");
        printf("      (_____)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
        printf("Computer chose Rock\n\n");
        return(1);
    }
    else if (random > 33 && random < 66)
    {
        printf("    _______\n");
        printf("---'   ____)______\n");
        printf("          ________)\n");
        printf("          _________)\n");
        printf("         _________)\n");
        printf("---.____________)\n");
        printf("Computer chose Paper\n\n");
        return(2);
    }
    else if (random > 66 && random < 100)
    {
        printf("    _______\n");
        printf("---'   ____)_____\n");
        printf("           _______)\n");
        printf("       ____________)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
        printf("Computer chose Scissors\n\n");
        return (3);
    }
    else 
    {
        printf("    _______\n");
        printf("---'   ____)____\n");
        printf("          ______)\n");
        printf("          _______)\n");
        printf("         _______)\n");
        printf("---.__________)\n");
        printf("Computer chose Paper\n\n");
        return(2);
    }
}

/* For This Function:
return value 1  ==> Player Won
return value 0  ==> Computer Won
return value -1 ==> Draw

Also Recall:
Rock = 1
Paper = 2
Scissors = 3
*/

int checkWin()
{
    comp = computer();

    if (comp == 1 && decision== 1) 
    {
        printf("Draw! You both chose Rock\n");
        return (-1);
    }
    else if (comp == 2 && decision== 1)
    {
        printf("You Lose! Paper wraps Rock\n");
        return (0);
    }
    else if (comp == 3 && decision== 1)
    {
        printf("You Win! Rock smashes Scissors\n");
        return (1);
    }
    else if (comp == 1 && decision== 2)
    {
        printf("You Win! Paper wraps Rock\n");
        return (1);
    }
    else if (comp == 2 && decision== 2)
    {
        printf("Draw! You both chose Paper\n");
        return (-1);
    }
    else if (comp == 3 && decision== 2)
    {
        printf("You Lose! Scissors cuts Paper\n");
        return (0);
    }
    else if (comp == 1 && decision== 3)
    {
        printf("You lose! Rock smashes Scissors\n");
        return (0);
    }
    else if (comp == 2 && decision== 3)
    {
        printf("You Win! Scissors cuts Paper\n");
        return (1);
    }
    else if (comp == 3 && decision== 3)
    {
        printf("Draw! You both chose Scissors\n");
        return (-1);
    }
}