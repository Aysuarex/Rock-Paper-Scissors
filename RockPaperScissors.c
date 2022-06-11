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

