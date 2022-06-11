/**
 * @file RockPaperScissors.c
 * @author Suara Ayomide(aysuarex@gmail.com)
 * @brief 
 *  
 * computer -
 * main -
 * checkWin -
 * 
 * @date 2022-06-11
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>


int computer();
int checkWin();
//int score();
int number;
char dummy;
char choice[8];
char name[11];
int decision;
int playerscore = 0;
int computerscore = 0;
//char choice;

int main()
{
    srand(time(NULL));
    system("cls");

    printf("=======================================\n");
    printf("Welcome to Rock, Paper Scissors!\n");
    printf("Input your Name (Max 10 Characters): ");
    scanf("%s", &name);
    
    Sleep(500);
    START:

    printf("\nMake a choice: Rock Paper or Scissors: \n");
    printf("Type X to exit\n\t\t\t==> ");
    scanf("%s", &choice);

    if (strcmp(choice, "rock") == 0 || strcmp(choice, "Rock") == 0 || strcmp(choice, "R") == 0 || strcmp(choice, "r") == 0)
        {
            decision = 1;
            printf("You chose Rock\n\n\n");
           // Sleep(1000);
            //goto START;
        }
    else if (strcmp(choice, "paper") == 0 || strcmp(choice, "Paper") == 0 ||  strcmp(choice, "P") == 0 || strcmp(choice, "p") == 0)
        {
            decision = 2;
            printf("You chose Paper\n\n\n");
            //Sleep(1000);
           // goto START;
        }
    else if (strcmp(choice, "scissors") == 0 || strcmp(choice, "Scissors") == 0 || strcmp(choice, "S") == 0 || strcmp(choice, "s") == 0)
        {
            decision = 3;
            printf("You chose Scissors\n\n\n");
           // Sleep(1000);
            //goto START;
        }
    else if (strcmp(choice, "X") == 0 || strcmp(choice, "x") == 0)
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
        printf("You can also simply type R, P or S\n\n\n");
        //Sleep(1000);
        //goto START;
    }
    Sleep(500);
    checkWin();

    //To increase the scores
    if (checkWin == 0) //If player loses
    {
        computerscore++;
    }
    else if (checkWin == 1) //If player wins
    {
        playerscore++;
    }
    
    printf("Scoresheet\n");
    printf("%s = %d\n", name, playerscore);
    printf("Computer = %d\n", computerscore);


    Sleep(1000);
    goto START;

    return 0;
}
